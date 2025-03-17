#include "function_pointers.h"
/**
 * int_index - return the index of the first element
 * @array: array of element
 * @size: size of array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*fp)(int);
	int i = -1;

	if (size < 0)
		return (-1);
	fp = cmp;
	for (i = 0; i < size; i++)
		if (fp(array[i]) != 0)
			return (i);
	return (-1);
}
