#include "variadic_functions.h"

/**
 * print_numbers - returns the largest of 3 numbers
 * @separator: df
 * @n: first intege
 * @...: ddd
 * Return: largest number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	va_list a;

	x = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (x--)
		printf("%d%s", va_arg(a, int), x ? (separator ? separator : "") : "\n");
	va_end(a);
}
