#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: input
 * Return: int
 */
int _strlen(char *s)
{
	int strlength = 0;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}
	return (strlength);
}
