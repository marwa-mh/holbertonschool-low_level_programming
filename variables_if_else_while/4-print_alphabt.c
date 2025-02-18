#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Uses puts to print a text
 * Return: 0 for success
 */
int main(void)
{
	int asciCode = 96;

	while (asciCode < 122)
	{
		asciCode++;
		if (asciCode == 'q' || asciCode == 'e')
			continue;
		putchar(asciCode);
	}
	putchar('\n');

	return (0);
}
