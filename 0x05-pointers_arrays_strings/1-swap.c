#include "main.h"

/**
 * swap_int - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
