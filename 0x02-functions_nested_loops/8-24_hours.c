#include "main.h"

/**
 * jack_bauer - print alphabets using asci code
 * print lowercase alphabet a-z
*/

void jack_bauer(void)
{
	int h;
	int m;

        for (h = 0; h <= 23; h++)
	{	
		for (m = 0; m <= 60; m++)
		{	_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m / 10 + 48);
			_putchar('\n');
		}
	}
}
