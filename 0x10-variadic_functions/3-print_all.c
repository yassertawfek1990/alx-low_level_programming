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
	printf("%s%f", s, va_arg(a, double));
}
/**
 * c - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void c(char *s, va_list a)
{
	printf("%s%c", s, va_arg(a, int));
}
/**
 * i - returns the largest of 3 numbers
 * @s: df
 * @a: first integ
 */
void i(char *s, va_list a)
{
	printf("%s%d", s, va_arg(a, int));
}
/**
 * print_all - returns the largest of 3 numbers
 * @format: df
 * @...: first integ
 */
void print_all(const char * const format, ...)
{
	int x = 0, o;
	char *s = "";
	va_list a;

	uu us[] = {
		{"c", c},
		{"i", i},
		{"f", f},
		{"s", g},
		{NULL, NULL}
	};
	va_start(a, format);
	while (format && format[x])
	{
		o = 0;
		while (us[o].u)
		{
			if (format[x] == us[o].u[0])
			{
				us[o].z(s, a);
				s = ", ";
			}
			o++;
		}
		x++;
	}
	printf("\n");
	va_end(a);
}

