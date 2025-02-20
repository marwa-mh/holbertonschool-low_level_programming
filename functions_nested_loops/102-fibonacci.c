#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int tmp = 0;
	int num = 2;
	int prev_num = 1;
	int counter = 2;

	printf("%d, %d, ", prev_num, num);
	while (counter <= 50)
	{
		tmp = num;
		num = num + prev_num;
		prev_num = tmp;
		printf("%d", num);
		if (counter != 50)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
