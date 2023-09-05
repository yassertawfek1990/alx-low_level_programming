#include "main.h"


/**
 * free_grid - returns the largest of 3 numbers
 * @grid: first in
 * @height: d
 * Return: largest number
 */

void free_grid(int **grid, int height)
{
	int i;

	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
