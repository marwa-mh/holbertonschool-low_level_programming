#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print the sum of two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int first_sum = 0;
	int second_sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i * size + i];
		second_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", first_sum, second_sum);
}
