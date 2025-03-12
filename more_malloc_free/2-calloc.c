#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory of an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > (unsigned int) -1 / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
