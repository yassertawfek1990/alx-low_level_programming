#include "main.h"

/**
 * more_numbers - returns the largest of 3 numbers
 */

void more_numbers(void)
{
	int i;
	int c;
	int n;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;

			if (i > 9)
			{
				_putchar((n / 10) + 48);
				n = n % 1;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
