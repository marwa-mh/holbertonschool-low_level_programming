#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "funcs.c"
/**
 * add_node - add node to list
 * @head: the header of the list
 * @str: the string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
