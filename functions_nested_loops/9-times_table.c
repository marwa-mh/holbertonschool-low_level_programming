#include "main.h"
/**
 * times_table - print 9 times table
 * Return: Nothing
 *
 */
void times_table(void)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tmp = i * j;
			if (tmp >= 10)
				_putchar('0' + tmp / 10);

			_putchar('0' + tmp % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if(tmp < 10 && (j+1)*i < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
