#include <stdio.h>

#define MAX 1000000000
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a_low = 1, a_high = 0;
	unsigned long b_low = 2, b_high = 0;
	unsigned long next_low, next_high;
	int counter = 3;

	printf("%lu, %lu", a_low, b_low);
	while (counter <= 98)
	{
		next_low = a_low + b_low;
		next_high = a_high + b_high;
		if (next_low >= MAX)
		{
			next_low = next_low - MAX;
			next_high = next_high + 1;
		}

		if (next_high == 0)
			printf(", %lu", next_low);
		else
			printf(", %lu%09lu", next_high, next_low);

		a_low = b_low;
		a_high = b_high;
		b_low = next_low;
		b_high = next_high;
		counter++;
	}
	printf("\n");
	return (0);
}
