#include <stdio.h>
#include "main.h"
#include "func.c"
/**
 * print_binary - convert to binary and print it
 * @b: char
 * Return: int
 */
void print_binary(unsigned long int n)
{
	int start_print = 0;
	int pow_index = _pow_index(2, n);
	unsigned long int max_pow = _pow(2, pow_index);

	while (pow_index >= 0)
	{
		if (max_pow <= n)
		{
			_putchar('1');
			n = n - max_pow;
		}
		else
		{
			if (start_print == 1 || n == 0)
				_putchar('0');
		}
		start_print = 1;
		pow_index--;
		max_pow = _pow(2, pow_index);
	}
}
