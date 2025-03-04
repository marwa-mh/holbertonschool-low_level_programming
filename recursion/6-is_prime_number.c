#include "main.h"
int helper(int n, int x);
/**
 * is_prime_number - check if the number is prime or not
 *  @n: int
 *  Return: int
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n < 2)
		return (0);
	return (helper(n, x));
}
/**
 * helper - Finding the prime number
 *  @n: int
 *  @x: int
 *  Return: int
 */
int helper(int n, int x)
{
	if (x < n)
	{
		if (n % x == 0)
			return (0);
		x++;
		return (helper(n, x));
	}
	else
		return (1);
}
