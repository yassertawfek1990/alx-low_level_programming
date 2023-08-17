#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: number
 * Return: largest number
 */

int print_number(int n)
{
	if (n <= -10 && n > -100)
	{
		n = n * -1;
		_putchar(45);
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n < 0 && n > -10)
	{
		n = n * -1;
		_putchar(45);
		_putchar(n + 48);
	}
	else if (n > 0 && n < 10)
		_putchar(n + 48);
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
		_putchar(48);
}

