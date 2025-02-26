#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: the array
 * @n: number of the elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int end_of_array = n - 1;
	int start_of_array = 0;
	int tmp = 0;

	while (start_of_array < end_of_array)
	{
		tmp = *(a + end_of_array);
		*(a + end_of_array) = *(a + start_of_array);
		*(a + start_of_array) = tmp;
		end_of_array--;
		start_of_array++;
	}
}
