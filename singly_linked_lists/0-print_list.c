#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print a list of singly linked list
 * @h: input
 * Return: int
 */
size_t print_list(const list_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
