
#include "main.h"

/**
 * array_range - returns the largest of 3 numbers
 * @min: first intege
 * @max: fsf
 * Return: largest number
 */

int *array_range(int min, int max)
{
	int *p;
	int t;
	int i;
	int n;
	int *s;

	n = min;

	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	p = malloc(sizeof(int) * t);
	if (!p)
		return (NULL);
	s = p;
	for (i = 0; i < t; i++)
	{
		s[i] = n;
		n++;
	}
	return (p);
}
