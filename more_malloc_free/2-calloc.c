#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory of an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = calloc(nmemb, size);
	if (array == NULL)
		return (NULL);
	return (array);
}
