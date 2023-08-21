#include "main.h"

/**
 * rev_string - returns the largest of 3 numbers
 * @s: first integ
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = l - 1; i >= 0; i--)
		s[i] = _putchar(s[i]);
}

