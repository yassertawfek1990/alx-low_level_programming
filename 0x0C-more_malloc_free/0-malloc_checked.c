
#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: first intege
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
