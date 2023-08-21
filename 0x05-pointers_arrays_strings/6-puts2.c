#include "main.h"

/**
 * puts2 - returns the largest of 3 numbers
 * @str: f
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i;

	for  (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
