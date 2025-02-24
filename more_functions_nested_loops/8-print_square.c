#include "main.h"

/**
 * print_square - print square
 * @size: input number
 * Return: nothing
 */
void print_square(int size)
{
	int width = 1;
	int length = 1;

	while (width <= size)
	{
		while (length <= size)
		{
			_putchar('#');
			length++;
		}
		length = 1;
		width++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
