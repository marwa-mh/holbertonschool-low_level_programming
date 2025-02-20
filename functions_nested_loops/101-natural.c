#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;
	int num;
	int i;

	num = 1024;
	while (i < num)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
		i++;
	}
	printf("%d", sum);
	return (0);
}
