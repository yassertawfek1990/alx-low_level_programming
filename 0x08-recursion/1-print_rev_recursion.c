#include "main.h"

/**
 * _print_rev_recursion - returns the largest of 3 numbers
 * @s: first intege
 * Return: largest number
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
