#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int str_length = 0;
	int half_length = 0;

	while (*str != '\0')
	{
		str_length++;
		str++;
	}
	half_length = str_length / 2;
	while (half_length > 0)
	{
		_putchar(*(str - half_length));
		half_length--;
	}
	_putchar('\n');
}
