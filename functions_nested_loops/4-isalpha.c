#include "main.h"

/**
 * _isalpha - check if character is letter
 *@c: input character
 * Return: int
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
