#include "main.h"

/**
 * reverse_array - returns the largest of 3 numbers
 * @a: first integer
 * @n: second integ
 * Return: largest number
 */

void reverse_array(int *a, int n)
{
	int d;

	for (d = n - 1; d >= 0; d--)
	{
		if (d > 0)
			printf("%d, ", a[d]);
		else
			printf("%d", a[d]);
	}

	printf("\n");
}
