#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert int to string
 * @s: input
 * Return: char
 */
int _atoi(char *s)
{
	char *p_start, *p_end;
	int num_found = 0;
	int result = 0;
	int minus_count = 0;
	int place_value = 1;


	while (*s != '\0')
	{
		while (*s == 45 || *s == 43)
		{
			if (*s == 45)
				minus_count++;
			s++;
		}
		if (*s >= 48 && *s <= 57)
		{
			p_start = s;
			s++;
			while (*s >= 48 && *s <= 57)
				s++;
			p_end = s;
			num_found = 1;
			break;
		}
		s++;
	}
	if (num_found == 1)
	{
		p_end--;
		while (p_start <= p_end)
		{
			if (result > INT_MAX - (*p_end - '0') * place_value)
			{
				if (minus_count % 2 == 0)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result + (*p_end - '0') * place_value;
			p_end--;
			if (place_value * 10 >= INT_MAX)
				return (INT_MAX);
			place_value = place_value * 10;
		}
		if (minus_count % 2 != 0)
			result = result * -1;
	}
	return (result);
}
