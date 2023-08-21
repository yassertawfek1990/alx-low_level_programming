#include "main.h"

/**
 * print_array - returns the largest of 3 numbers
 * @a: first integ
 * @n: first integ
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

