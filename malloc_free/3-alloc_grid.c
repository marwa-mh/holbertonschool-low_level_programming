#include "main.h"
#include <stdlib.h>
/**
 * *alloc_grid - return 2D array
 * @width: row size
 * @height: column size
 * Return: a pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			while (h > 0)
			{
				free(array[h - 1]);
				h--;
			}
			free(array);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}
	return (array);
}
