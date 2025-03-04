#include "main.h"
int helper(int n, int d);
/**
 * _sqrt_recursion - return sqrt number
 *  @n: int
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	int numbers[] = {2, 3, 7, 8};
	int i = 0;

	for (i = 0; i < 4; i++)
		if (n % 10 == numbers[i])
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
