#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dupplicate array
 * @str: the character
 * Return: pointer of char
 */
char *_strdup(char *str)
{
	char *p = str;
	char *cp;
	unsigned int i = 0;
	unsigned int size = 0;

	while (*p != '\0')
	{
		size++;
		p++;
	}
	if (size == 0)
		return (NULL);
	cp = malloc(sizeof(char) * size);
	if (cp == NULL)
		return (NULL);
	while (i < size)
	{
		cp[i] = str[i];
		i++;
	}
	return (cp);
}
