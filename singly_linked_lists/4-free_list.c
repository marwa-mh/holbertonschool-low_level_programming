#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free list
 * @head: the header of the list
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
