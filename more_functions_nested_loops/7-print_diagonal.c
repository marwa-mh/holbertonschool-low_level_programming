#include "main.h"

/**
 * print_diagonal - print diagnoal
 * @n: input character
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 1, j = 0;

	while (i <= n)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		j = 0;
	}
	_putchar('\n');
}
