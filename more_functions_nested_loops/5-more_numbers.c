#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 , 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int num = 0;
	int count = 1;

	while (count <= 10)
	{
		while (num <= 14)
		{
			if (num > 9)
				_putchar ('0' + (num / 10));
			_putchar('0' + (num % 10));
			num++;
		}
		num = 0;
		count++;
		_putchar('\n');
	}
}
