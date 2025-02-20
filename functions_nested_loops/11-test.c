#include "main.h"

/**
 * print_to_98 - print the numbers from int to 98
 *@n: input number
 * Return: nothing
 *
 */
void print_to_98(int n)
{
	int c = 98;
	int un;

	while (n != c)
	{
		un = n;
		if (n < 0)
		{
			un = n * -1;
			_putchar('-');
		}
		if (un >= 100)
		{
			_putchar('0' + (un / 100));
			_putchar('0' + ((un / 10) % 10));
		}
		else if (un >= 10)
		{
			_putchar('0' + (un / 10));
		}
		_putchar('0' + (un % 10));
		if (n > c)
			n--;
		else
			n++;
		_putchar(',');
		_putchar(' ');
	}
	if (n == c)
	{
		_putchar('0' + 9);
		_putchar('0' + 8);
		_putchar('\n');
	}
}
