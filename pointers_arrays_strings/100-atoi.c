#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert int to string
 * @s: input
 * Return: char
 */
int _atoi(char *s)
{
	char *p_start, *p_end;
	bool num_found = false;
	int result = 0;
	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			*p_start = s;
			s++;
			while (*s >= 48 && *s <= 57)
				s++;
			*p_end = s;
			num_found = true;
			break;
		}
		s++;
	}
	if (num_found)
	{
		while (p_start != p_end)
		{
			result = result + (*p_end);
			p_end--;
		}
	}
	return (result);
}
