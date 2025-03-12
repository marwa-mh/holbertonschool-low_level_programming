#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of character from s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *p_s1, *p_s2;
	unsigned int len_s1 = 0, len_s2 = 0, counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p_s1 = s1;
	p_s2 = s2;
	while (*s1 != '\0')
	{
		s1++;
		len_s1++;
	}
	while (*s2 != '\0')
	{
		s2++;
		len_s2++;
	}
	s1 = p_s1;
	s2 = p_s2;
	if (n > len_s2)
		n = len_s2;
	str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (str == NULL)
		return (NULL);
	while (counter < len_s1)
	{
		str[counter] = s1[counter];
		counter++;
	}
	while (counter < len_s1 + n)
	{
		str[counter] = s2[counter - len_s1];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
