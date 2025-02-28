#include "main.h"

/**
 * leet - encode a string to 1337
 * @str: input
 * Return: char
 */
char *leet(char *str)
{
	char *ptr = str;
	char arr2d[5][2] = {{'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}};
	int i = 0;

	arr2d[4][0] = 'L';
	arr2d[4][1] = '1';
	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == arr2d[i][0] || *str - 32 == arr2d[i][0])
			{
				*str = arr2d[i][1];
				break;
			}
		}
		str++;
	}
	str = ptr;
	return (str);
}
