#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node to the linked list
 * @n: number
 * @head: points to the first node
 *
 * Return: point to the new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr = *head;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
		new_node->prev = *head;
		*head = ptr;
	}
	return (new_node);
}
