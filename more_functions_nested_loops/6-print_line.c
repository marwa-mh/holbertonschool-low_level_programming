#include "main.h"

/**
 * print_line - draw a straight line
 * @n: input character
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
