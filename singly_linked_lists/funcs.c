#include <stdio.h>
/**
 * _str_len - return the length of the string
 * @str: input
 * Return: int
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
