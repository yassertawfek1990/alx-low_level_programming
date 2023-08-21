#include "main.h"

/**
 * rev_string - returns the largest of 3 numbers
 * @s: first integ
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
		s[i] = _putchar(s[i]);
	_putchar('\n');
}

