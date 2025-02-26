#include "main.h"

/**
 * *_strcmp - compare 2 strings
 * @s1: input
 * @s2: input
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int distance = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		distance = *s1 - *s2;
		if (distance != 0)
			return (distance);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
	{
		distance = *s1;
	}
	if (*s2 != '\0')
	{
		distance = -*s2;
	}
	return (distance);
}
