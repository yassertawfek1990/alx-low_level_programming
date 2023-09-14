#include "variadic_functions.h"

/**
 * sum_them_all - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int x, t;

	s = 0;
	x = n;

	if (n == 0)
		return (0);
	va_start(a, n);
	while (x--)
		t += va_arg(a, int);
	va_end(a);
	return (t);

}
