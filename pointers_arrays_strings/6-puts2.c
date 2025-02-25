#include "main.h"

/**
 * puts2 - print every other character
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
