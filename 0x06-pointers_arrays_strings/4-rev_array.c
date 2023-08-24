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
	int x;
	int i;

	for (d = 0; d < n / 2; d++)
	{
		x = a[d];
		a[d] = a[n - d - 1];
		a[n - d - 1] = x;
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");
}
