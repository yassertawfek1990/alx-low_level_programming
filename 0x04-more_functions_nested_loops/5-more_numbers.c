#include "main.h"

/**
 * more_numbers - returns the largest of 3 numbers
 */

void more_numbers(void)
{
	int i;
	int c:

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
				_putchar(i + 48);
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
