#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct u - gh
 * @u: rf
 * @z: d
 */

typedef struct u
{
	char *u;
	void (*z)(char *,va_list);
} uu;

#endif
