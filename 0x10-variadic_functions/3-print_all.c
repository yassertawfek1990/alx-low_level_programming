#include "variadic_functions.h"

/**
 * g - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void g(char *s, va_list a)
{
	char *q =  va_arg(a, char *);

	switch ((int)(!q))
		case 1:
			q = "(nil)";
	printf("%s%s", s, q)
}
/**
 * f - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void f(char *s, va_list a)
{
	printf("%s%f", s, va_arg(a, double))
}
/**
 * c - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void c(char *s, va_list a)
{
	printf("%s%c", s, va_arg(a, int))
}
/**
 * i - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void i(char *s, va_list a)
{
	printf("%s%d", s, va_arg(a, int))
}
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
