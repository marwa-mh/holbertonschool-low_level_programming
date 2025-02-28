#include "main.h"

/**
 * print_number - print number
 *@n : number
 * Return: void
 */
void print_number(int n)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
			un = 2147483648;
		else
			un = -n;
	}
	if (un >= 10)
	{
		print_number(un / 10);
		_putchar(48 + un % 10);
	}
	else
		_putchar(48 + un);
}
