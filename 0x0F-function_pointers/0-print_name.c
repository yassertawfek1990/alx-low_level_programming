#include "function_pointers.h"

/**
 * print_name - returns the largest of 3 numbers
 * @name: first intege
 * @f: c 
 * Return: largest number
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
