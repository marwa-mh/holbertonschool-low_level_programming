#include "main.h"

/**
 * _islower - check if character is in lowercase
 *@c: input character
 * Return: int
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
