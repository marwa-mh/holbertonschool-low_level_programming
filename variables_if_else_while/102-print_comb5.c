#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Uses puts to print a text
 * Return: 0 for success
 */
int main(void)
{
	int f_f_num = 0;
	int f_s_num = 0;
	int l_f_num = 0;
	int l_s_num = 1;

	while (f_f_num < 10 && !(f_f_num == 9 && f_s_num == 9))
	{
		putchar('0' + f_f_num);
		putchar('0' + f_s_num);
		putchar(' ');
		putchar('0' + l_f_num);
		putchar('0' + l_s_num);
		l_s_num++;
		while (l_s_num == 10)
		{
			l_f_num++;
			if (l_f_num  == 10)
			{
				f_s_num++;
				if (f_s_num == 10)
				{
					f_f_num++;
					f_s_num = 0;
				}
				l_f_num = 0;
			}
			l_s_num = 0;
		}
		if (f_f_num < 10 && !(f_f_num == 9 && f_s_num == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
