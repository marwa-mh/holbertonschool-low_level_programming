#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @index: index
 * @head: points to the first node
 *
 * Return: point to the node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);
	while (n != index)
	{
		if (head->next !=NULL)
		{
			head = head->next;
			n++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
