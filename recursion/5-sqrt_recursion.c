#include "main.h"
int helper(int n, int d);
/**
 * _sqrt_recursion - return sqrt number
 *  @n: int
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	int ld = n % 10;

	if (ld == 2 || ld == 3 || ld == 7 || ld == 8)
		return (-1);
	return  (helper(n, 1));
}
int helper(int n, int d)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (1 + helper(n - d, d + 2));
}
