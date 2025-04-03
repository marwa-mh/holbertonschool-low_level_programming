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
		if (ptr->next != NULL)
			ptr = ptr->next;
		else
			break;
	}
	if (ptr == NULL || counter != index)
		return (-1);
	if (counter == 0)
	{
		if (ptr->next != NULL)
		{
			ptr->next->prev = NULL;
			ptr = ptr->next;
		}
		else
			ptr = NULL;
		(*head) = ptr;
	}
	else if (ptr->next != NULL)
	{
		ptr->next->prev = ptr->prev;
		ptr->prev->next = ptr->next;
	}
	else
	{
		ptr->prev->next = NULL;
		ptr->prev = NULL;
	}
	return (1);
}
