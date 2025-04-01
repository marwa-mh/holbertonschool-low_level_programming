/**
 * print_dlistint - print doubly linked list
 * @prev: points to the previous node
 * @h: points to the first node
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
