#include "main.h"

/**
 * alloc_grid - returns the largest of 3 numbers
 * @width: first in
 * @height: d
 * Return: largest number
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int x, m, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);
	if (!p)
                return (NULL);
	for (z = 0; z < height; z++)
		p[z] = malloc(sizeof(*p[z]) * width);
	if (!p)
	{
		while (p[z])
		{
			free(p[z]);
			z--;
		}
		free(p);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (m = 0; m < width; m++)
			p[x][m] = 0;
	}
	return (p);
}