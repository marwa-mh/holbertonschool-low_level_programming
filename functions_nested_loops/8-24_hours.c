#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minute of the day
 * Return: Nothing
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
			printf("%02d:%02d\n", h, m);
}
