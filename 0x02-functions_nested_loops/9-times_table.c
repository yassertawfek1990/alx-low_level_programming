#include "main.h"

/**
 * times_table - print alphabets using asci code
 * print lowercase alphabet a-z
*/

void times_table(void)
{
	int n1;
	int n2;
	int p;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar(48);
		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');

			p = n1 * n2;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
