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
	int middle_num = 1;
	int last_num = 2;

	while (first_num < 10 && middle_num  && last_num < 10)
	{
		putchar('0' + first_num);
		putchar('0' + middle_num);
		putchar('0' + last_num);
		last_num++;
		while (last_num == 10)
		{
			middle_num++;
			if (middle_num + 1 == 10)
			{
				first_num++;
				middle_num = first_num + 1;
			}
			last_num = middle_num + 1;
		}
		if (last_num < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
