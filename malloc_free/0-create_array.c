#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: the size of array
 * @c: the character
 * Return: pointer of char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
