#include "main.h"

/**
 * *_strcat - apped src string to the dest string
 * @dest: input
 * @src: input
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	int dest_length = 0;
	int src_length = 0;

	while (*dest != '\0')
	{
		dest++;
		dest_length++;
	}
	while (*src !='\0')
	{
		*dest = *src;
		dest++;
		src++;
		dest_length++;
		src_length++;
	}
	*dest = *src;
	dest = p;
	src = src - src_length;
	return (p);
}
