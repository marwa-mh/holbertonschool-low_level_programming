#include "main.h"
#include <stdio.h>
/**
 * rev_string - print a string in reverse followed by new line
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int str_length = 0;
	char tmp;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}
	while (str_length > 0)
	{
		s--;
		tmp = *(s - str_length + 1);
		*(s - str_length + 1) = *s;
		*s = tmp;
		str_length = str_length - 2;
	}
}
