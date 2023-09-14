#include "variadic_functions.h"

/**
 * print_strings - returns the largest of 3 numbers
 * @separator: df
 * @n: first intege
 * @...: ddd
 * Return: largest number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x;
	char *d;
	va_list a;

	x = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (x--)
	{
		printf("%s%s", (d = va_arg(a, char *)) ? d : "(nil)",
			x ? (separator ? separator : "") : "\n");
	}
	va_end(a);
}
