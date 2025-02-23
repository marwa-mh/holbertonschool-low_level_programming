#include "main.h"

/**
 * _isdigit - check the character if digit
 * @c: input character
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
