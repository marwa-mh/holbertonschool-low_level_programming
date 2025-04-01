#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 *
 * Return: number of doubly linked list node
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
