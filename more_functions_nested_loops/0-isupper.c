#include "main.h"

/**
 * _isupper - check the character if in upper case
 * @c: input character
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
