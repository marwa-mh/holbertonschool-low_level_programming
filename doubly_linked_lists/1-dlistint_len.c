#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - print the number of the linkedlist
 * @h: points to the first node
 * Return: number of doubly linked list node
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
