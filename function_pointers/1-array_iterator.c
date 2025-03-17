#include "function_pointers.h"
/**
 * array_iterator - print array with different types
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*fp)(int);
	int i = 0;

	fp = action;
	for (i = 0; i < size; i++)
		fp(array[i]);
}
