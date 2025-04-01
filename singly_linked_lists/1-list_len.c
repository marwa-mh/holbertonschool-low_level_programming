#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - print a list of singly linked list
 * @h: input
 * Return : int
 */
size_t list_len(const list_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
