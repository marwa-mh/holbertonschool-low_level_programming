#include "main.h"

/**
 * _abs - print the absoulte value of the number
 *@n: input number
 * Return: int
 *
 */
int _abs(int n)
{
	int absValue = n;

	if (n < 0)
	{
		absValue = n * -1;
	}

	return (absValue);
}
