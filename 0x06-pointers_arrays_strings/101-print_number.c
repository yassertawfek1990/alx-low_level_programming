#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */

void print_number(int n)
{
	unsigned int x;
	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
