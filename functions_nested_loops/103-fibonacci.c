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
	long int max_value = 4000000;
	long int even_sum = num;

	while (num <= max_value)
	{
		tmp = num;
		num = num + prev_num;
		if (num > max_value)
			break;
		prev_num = tmp;
		if (num % 2 == 0)
			even_sum = even_sum + num;
	}
	printf("%ld\n", even_sum);
	return (0);
}
