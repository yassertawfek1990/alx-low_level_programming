#include "main.h"

/**
 * print_square - returns the largest of 3 numbers
 * @size: first intege
 * Return: largest number
 */

void print_square(int size)
{
	int i;
	int w;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (w = 1; w <= size; w++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
