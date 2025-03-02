#include "main.h"

/**
 *_memset - fills the memory with constant byte
 * @n: fist n bytes of the memory area
 * @s: string
 * @b: constant byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ps = s;

	i = 0;
	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return (ps);
}
