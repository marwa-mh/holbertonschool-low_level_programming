#include "main.h"
/**
 * factorial - return the factorial of a given number;
 *  @n: the given number
 *  Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
