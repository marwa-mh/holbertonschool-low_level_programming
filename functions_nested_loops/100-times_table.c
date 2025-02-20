#include "main.h"
/**
 * print_times_table - print n times table
 * Return: Nothing
 * @n: input
 */
void print_times_table(int n)
{
	int i;
	int j;
	int tmp;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				tmp = i * j;
				if (tmp >= 100)
				{
					_putchar('0' + tmp / 100);
					_putchar('0' + (tmp % 100) / 10);
				}
				else if (tmp >= 10)
					_putchar('0' + tmp / 10);
				_putchar('0' + tmp % 10);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (tmp < 10 && (j + 1) * i < 10)
						_putchar(' ');
					if (tmp < 100 && (j + 1) * i < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
