#include "main.h"

/**
 * rot13 - encode a string to 1337
 * @str: input
 * Return: char
 */
char *rot13(char *str)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = str;
	int i = 0;

	while (*p)
	{
		for (i = 0; alpha[i] != '\0'; i++)
		{
			if (*p == alpha[i])
			{
				*p = rot13[i];
				break;
			}
		}
		p++;
	}
	return (str);
}
