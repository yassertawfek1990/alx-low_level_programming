
#include "main.h"

/**
 * malloc_checked - returns the largest of 3 numbers
 * @b: first intege
 * Return: largest number
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b <= 0)
		exit(98);
	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
