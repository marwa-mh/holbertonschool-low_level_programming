#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D array
 * @grid: 2D array
 * @height: rows number;
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
