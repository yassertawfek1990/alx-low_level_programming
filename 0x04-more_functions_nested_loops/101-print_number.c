#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: number
 * Return: largest number
 */

int print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

