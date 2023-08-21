#include "main.h"

/**
 * puts_half - returns the largest of 3 numbers
 * @str: f
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int i;

	if (l % 2 == 0)
	{
		for  (i = (l / 2); i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((l - 1) / 2); i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
