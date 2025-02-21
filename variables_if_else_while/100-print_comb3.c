#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Uses puts to print a text
 * Return: 0 for success
 */
int main(void)
{
	int first_num = 0;
	int last_num = 1;

	while (first_num < 10 && last_num < 10)
	{
		putchar('0' + first_num);
		putchar('0' + last_num);
		last_num++;
		if (last_num == 10)
		{
			first_num++;
			last_num = first_num + 1;
		}
		if (last_num != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
