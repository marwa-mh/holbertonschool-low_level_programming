#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: pointer of array
 * @n: input
 * Return: void
 */
void print_array(int *a, int n)
{
	while (n > 1)
	{
		printf("%d, ", *a);
		a++;
		n--;
	}
	printf("%d\n", *a);
}
