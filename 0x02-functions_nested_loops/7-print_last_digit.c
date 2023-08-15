#include "main.h"

/**
 * print_last_digit - print alphabets if lowercase using asci code
 * print lowercase alphapet a-z
 *
 * @r: integer
 *
 * Return: 1 if lowercase 0 if uppercase
*/

int print_last_digit(int r)
{
	int d;

	if (r < 0)
		d = (r % 10) * -1;
	else
		d = r % 10;

	_putchar(d + 48);
	return (d);

}
