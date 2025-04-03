#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert node depend on the index
 * @h: points to the first node
 * @idx: index
 * @n: number
 * Return: the sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int index = 0;
	dlistint_t *tmpNode;
	dlistint_t *ptr = *h;

	while (index < idx && ptr->next != NULL)
	{
		ptr = ptr->next;
		index++;
	}
	if (index > idx)
		return (NULL);
	tmpNode = malloc(sizeof(dlistint_t));
	tmpNode->n = n;

	if (index == 0)
	{
		tmpNode->next = ptr;
		tmpNode->prev = NULL;
		ptr->prev = tmpNode;
		ptr = ptr->prev;
		*h = ptr;
	}
	else if (ptr->next == NULL && index != idx)
	{
		tmpNode->prev = ptr;
		tmpNode->next = NULL;
		ptr->next = tmpNode;
	}
	else
	{
		tmpNode->prev = ptr->prev;
		tmpNode->next = ptr;
		ptr->prev->next = tmpNode;
		ptr->prev = tmpNode;
	}
	return (tmpNode);
}
