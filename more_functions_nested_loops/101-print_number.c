#include "main.h"

/**
 * print_number - print number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (number >= 10)
	{
		_print_number(n / 10);
		_putchar(48 + n % 10);
	}
	else
		_putchar(48 + n);
}
