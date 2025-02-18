#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Uses puts to print a text
 * Return: 0 for success
 */
int main(void)
{
	int asciCode = 122;

	while (asciCode > 96)
	{
		putchar(asciCode);
		asciCode--;
	}
	putchar('\n');

	return (0);
}
