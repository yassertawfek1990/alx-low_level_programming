#include "main.h"

/**
 * print_rev - returns the largest of 3 numbers
 * @s: first integ
 */

void print_rev(char *s);
{
	int i;
	int l = strlen(s);

	for (i = l-1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

