#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy string
 * @dest: input destination
 * @src: input source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int str_length = 0;


	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		str_length++;
	}
	if (*src == '\0')
		*dest = *src;

	dest = dest - str_length;
	return (dest);
}
