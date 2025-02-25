#include "main.h"

/**
 * print_rev - print a string in reverse followed by new line
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}
	while (str_length >= 0)
	{
		_putchar(*s);
		str_length--;
		s--;
	}
	_putchar('\n');
}
