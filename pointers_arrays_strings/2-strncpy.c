#include "main.h"

/**
 * *_strncpy - copy string like strncpy
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int src_length = 1;

	if (n <= 0)
		return (p);

	while (*src != '\0' && src_length < n)
	{
		*dest = *src;
		dest++;
		src++;
		src_length++;
	}
	*dest = *src;
	dest = p;
	src = src - n;
	return (p);
}
