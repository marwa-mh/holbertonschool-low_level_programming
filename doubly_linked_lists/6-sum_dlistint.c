#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - return the sum of nodes
 * @head: points to the first node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
