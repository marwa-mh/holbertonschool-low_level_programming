#include "main.h"

/**
 *_memcpy - copy n bytes from memory area src to dest
 * @n: number of bytes
 * @dest: to
 * @src: from
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_to_dest = dest;
	int i = 1;

	while (i <= n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p_to_dest);
}
