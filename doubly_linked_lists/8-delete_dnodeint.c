#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node depend on the index
 * @head: points to the first node
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int counter = 0;

	while (counter < index && ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	if (ptr == NULL || counter != index)
		return (-1);
	if (ptr->prev)
		ptr->prev->next = ptr->next;
	else
		*head = ptr->next;

	if (ptr->next)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
