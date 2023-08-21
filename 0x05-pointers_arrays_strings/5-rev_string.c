#include "main.h"

/**
 * rev_string - returns the largest of 3 numbers
 * @s: first integ
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);
	int x;

	for (i = 0; i < l / 2; i++)
	{
		x = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = x;
	}
}

