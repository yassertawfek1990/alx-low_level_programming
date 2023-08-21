#include "main.h"

/**
 * _puts - returns the largest of 3 numbers
 * @ste: first integ
 */

void _puts(char *str)
{
	int i;
	int l = strlen(str);
	
	for (i = 1; i <= l; i++)
		_putchar(str[i]);
	_putchar('\n');
}

