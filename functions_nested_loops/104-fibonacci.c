#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long double tmp = 0;
	long double num = 2;
	long double prev_num = 1;
	int counter = 3;

	printf("%.0Lf, %.0Lf, ", prev_num, num);
	while (counter <= 98)
	{
		tmp = num;
		num = num + prev_num;
		prev_num = tmp;
		printf("%.0Lf", num);
		if (counter != 98)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
