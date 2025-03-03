#include "main.h"
#include <string.h>

/**
 *_strpbrk - substring
 * @s: string
 * @accept: substring
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_accept = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = p_accept;
	}
	return (NULL);
}
