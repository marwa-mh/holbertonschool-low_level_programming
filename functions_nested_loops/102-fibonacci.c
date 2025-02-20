#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int tmp = 0;
	long int num = 2;
	long int prev_num = 1;
	long int counter = 3;

	printf("%ld, %ld, ", prev_num, num);
	while (counter <= 50)
	{
		tmp = num;
		num = num + prev_num;
		prev_num = tmp;
		printf("%ld", num);
		if (counter != 50)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
