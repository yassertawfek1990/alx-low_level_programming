#include "function_pointers.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
