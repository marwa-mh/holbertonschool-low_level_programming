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

	while (n != c)
	{
		if (n < 0)
		{
			_putchar('-');
			if (n <= -100)
			{
				_putchar('0' + (-n / 100));
				_putchar('0' + ((-n / 10) % 10));
			}
			else if (n <= -10)
			{
				_putchar('0' + (-n / 10));
			}
			_putchar('0' + (-n % 10));
		}
		else
		{
			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
			}
			else if (n >= 10)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));
		}
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
