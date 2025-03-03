#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p_accept = accept;
	int count = 0;

	while (*s != '\0')
	{
		accept = p_accept;
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				break;
			}
			accept++;
		}
		if (*accept == '\0')
			return (count);
		count++;
		s++;
	}
	return (count);
}
