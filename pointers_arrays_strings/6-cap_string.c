#include "main.h"

/**
 * cap_string - Capitalize all worlds
 * @str: input
 * Return: char
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int should_capitalize = 0;

	while (*str != '\0')
	{
		if (*str == ',' || *str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '\"' || *str == '(' || *str == ')' || *str == '{' || *str == '}' || *str == 32  || *str == 32 || *str == '\n' || *str == 9)
		{
			should_capitalize = 1;
		}
		else
		{
			if (should_capitalize == 1 && *str >= 'a' && *str <= 'z')
				*str =*str - 32;
			should_capitalize = 0;
		}
		str++;
	}
	str = ptr;
	return (ptr);
}
