#include "main.h"

/**
 * print_sign - print alphabets if lowercase using asci code
 * print lowercase alphapet a-z
 *
 * @n: integer
 *
 * Return: 1 if positive or negative 0 if zero
*/

int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{	
		_putchar(48);
		return (0);
	}
	else (n < 0)
	{	
		_putchar(45);
		return (-1);
	}
}
