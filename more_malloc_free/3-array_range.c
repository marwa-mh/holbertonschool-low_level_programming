#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: start value
 * @max: end value
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= size && min <= max; i++, min++)
		array[i] = min;
	return (array);
}
