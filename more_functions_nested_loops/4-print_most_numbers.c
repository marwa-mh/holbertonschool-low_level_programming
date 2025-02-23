#include "main.h"

/**
 * print_most_numbers - print all number fro 0 to 9 except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	char ch = 47;

	while (ch < 57)
	{
		ch++;
		if (ch == 48 + 2 || ch == 48 + 4)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
