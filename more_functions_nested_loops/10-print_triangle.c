#include "main.h"

/**
 * print_triangle - print triangle
 * @size: input character
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = size, j = 1;

	while (i > 0)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i--;
		j = 1;
	}
	if (size <= 0)
		_putchar('\n');
}
