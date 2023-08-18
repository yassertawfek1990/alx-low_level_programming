#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: number
 * Return: largest number
 */


void print_number(int n)
{
	unsigned int x;
	x = n;

	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
	}

	if (x / 10 != 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}


