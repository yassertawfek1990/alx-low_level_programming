#include "main.h"

/**
 * print_triangle - returns the largest of 3 numbers
 * @size: size
 * Return: largest number
 */
void print_triangle(int size)
{
	int i;
	int c;
	int d;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (c = size; c > i; c--)
				_putchar(' ');
			for (d = 1; d <= i; d++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
