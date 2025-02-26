#include "main.h"

/**
 * *_strncat - append src string to the dest string
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int dest_length = 0;
	int src_length = 1;

	while (*dest != '\0')
	{
		dest++;
		dest_length++;
	}
	while (*src != '\0' && src_length < n)
	{
		*dest = *src;
		dest++;
		src++;
		dest_length++;
		src_length++;
	}
	*dest = *src;
	dest = p;
	src = src - n;
	return (p);
}
