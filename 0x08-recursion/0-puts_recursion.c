#include "main.h"

/**
 * _puts_recursion - returns the largest of 3 numbers
 * @s: first intege
 * Return: largest number
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
		_putchar(*s);
		_puts_recursion(s + 1);
}
