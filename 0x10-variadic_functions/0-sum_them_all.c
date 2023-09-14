#include "variadic_functions.h"

/**
 * sum_them_all - returns the largest of 3 numbers
 * @n: first intege
 * @...: ddd
 * Return: largest number
 */

int sum_them_all(const unsigned int n, ...)
{
	int x, t;
	va_list a;

	t = 0;
	x = n;

	if (!n)
		return (0);
	va_start(a, n);
	while (x--)
		t += va_arg(a, int);
	va_end(a);
	return (t);

}
