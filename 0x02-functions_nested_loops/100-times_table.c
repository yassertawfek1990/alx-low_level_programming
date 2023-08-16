#include "main.h"

/**
 * print_times_table - print alphabets using asci code
 * print lowercase alphabet a-z
 * @n: number
*/

void print_times_table(int n)
{
	int n1;
	int n2;
	int p;

	if (n >= 0 && n =< 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{	
			_putchar(48);
			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				_putchar(' ');

				p = n1 * n2;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{	
					_putchar((p / 100) + 48)
					_putchar((p / 10) % 10 + 48)
				}	
				else if (p <= 99 && p >= 10)
				{	
					_putchar((p / 10) + 48);

				_putchar((p % 10) + 48);
			}	
			_putchar('\n');
		}
	}	
}
