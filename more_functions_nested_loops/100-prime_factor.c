#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n >= i)
	{
		i = 2;
		while (n % i != 0)
			i++;
		n = n / i;
	}
	printf("%ld\n", i);
	return (0);
}

