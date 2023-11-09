#include "main.h"

/**
 * _puts - returns the largest of 3 numbers
 * @str: first integ
 */

void _puts(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}

