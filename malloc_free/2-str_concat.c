#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;
	unsigned int counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size_s1] != '\0')
		size_s1++;
	while(s2[size_s2] != '\0')
		size_s2++;
	str = malloc((sizeof(char) * size_s1) + (sizeof(char) * size_s2) + 1);
	while (counter < size_s1)
	{
		str[counter] = s1[counter];
		counter++;
	}
	while (counter < size_s1 + size_s2)
	{
		str[counter] = s2[counter - size_s1];
		counter++;
	}
	str[counter] = '\0';

	return (str);
}
