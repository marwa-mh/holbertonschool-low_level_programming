#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: the header of the list
 * Return: void
 */
void free_dlistint(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
