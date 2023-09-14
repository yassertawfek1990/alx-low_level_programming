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

	va_start(a, n);
	for (x = 0; x < n; x++)
	{
		if (!separator)
		{
			if (x == 0)
				printf("%d", va_arg(a, int);
			else
				printf(" %d", va_arg(a, int);
		}
		else
		{
			if (x == 0)
				printf("%d", va_arg(a, int);
			else
				printf("%c %d", separator, va_arg(a, int);
		}
	}
	va_end(a);
	printf('\n');

}
