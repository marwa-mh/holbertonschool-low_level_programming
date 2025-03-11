#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dupplicate array
 * @str: the character
 * Return: pointer of char
 */
char *_strdup(char *str)
{
	char *cp;
	unsigned int i = 0;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	cp = malloc(sizeof(char) * size);
	if (cp == NULL)
		return (NULL);
	while (i < size - 1)
	{
		cp[i] = str[i];
		i++;
	}
	cp[size - 1] = '\0';
	return (cp);
}
