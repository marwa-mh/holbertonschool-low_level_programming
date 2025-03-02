#include "main.h"

/**
 *_strchr - locate a character in a string
 * @c: charater to find
 * @s: string
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
