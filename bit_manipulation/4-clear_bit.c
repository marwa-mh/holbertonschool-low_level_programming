#include <stdio.h>
#include "main.h"
/**
 * clear_bit - get bit depending on index
 * @n: number
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
