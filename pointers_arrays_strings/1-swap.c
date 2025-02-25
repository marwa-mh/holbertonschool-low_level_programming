#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: input
 * @b: input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp_val = *a;

	*a = *b;
	*b = temp_val;
}
