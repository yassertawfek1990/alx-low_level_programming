#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void g(char *s, va_list a);
void i(char *s, va_list a);
void c(char *s, va_list a);
void f(char *s, va_list a);

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
