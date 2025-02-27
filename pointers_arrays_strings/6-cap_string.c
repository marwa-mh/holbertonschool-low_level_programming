#include "main.h"

/**
 * cap_string - Capitalize all worlds
 * @str: input
 * Return: char
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int should_capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
			should_capitalize = 0;
		else if ((*str >= 'a' && *str <= 'z') && should_capitalize == 1)
		{
			*str = *str - 32;
			should_capitalize = 0;
		}
		else
		{
			for (i = 0; separators[i] != '\0'; i++)
			{
				if (*str == separators[i])
				{
					should_capitalize = 1;
					break;
				}
			}
		}
		str++;
	}
	str = ptr;
	return (ptr);
}
