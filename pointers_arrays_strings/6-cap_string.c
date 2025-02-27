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
		if ((*str >='a' && *str <= 'z') || (*str >= 'A' && *str <='Z'))
		{
			if (should_capitalize == 1 && *str >= 'a' && *str <= 'z')
				*str = *str - 32;
			should_capitalize = 0;
		}
		else
		{
			for (i = 0; separators[i] !='\0'; i++)
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
