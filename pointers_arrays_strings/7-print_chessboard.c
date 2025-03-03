#include "main.h"

/**
 *print_chessboard - print chessboard from the array
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
