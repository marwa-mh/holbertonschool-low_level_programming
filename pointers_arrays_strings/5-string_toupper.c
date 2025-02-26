#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: input
 * Return: char
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	str = ptr;
	return (ptr);
}
