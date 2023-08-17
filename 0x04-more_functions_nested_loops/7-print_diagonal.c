#include "main.h"

/**
 * print_diagonal - returns the largest of 3 numbers
 * @n: n
 * Return: largest number
 */
void print_diagonal(int n)
{
	int i;
	int c;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
}
