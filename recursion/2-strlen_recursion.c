#include "main.h"
/**
 *  _strlen_recursion - print the length of a string
 *  @s: string to print
 *  Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}
	return (len);
}
