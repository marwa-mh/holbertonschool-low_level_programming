#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: char
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;
	int tmpValue = 0;
	const char *b_end = b;

	while (*b_end != '\0')
		b_end++;
	b_end--;

	while (b != b_end)
	{
		tmpValue = *b_end - 48;
		if (tmpValue != 0 && tmpValue != 1)
			return (0);
		result += tmpValue * pow(2, index);
		index++;
		b_end--;
	}
	tmpValue = *b_end - 48;
	result += tmpValue * pow(2, index);
	return (result);
}

