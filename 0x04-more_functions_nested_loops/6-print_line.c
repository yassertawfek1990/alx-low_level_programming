#include "main.h"

/**
 * print_line - returns the largest of 3 numbers
 * @n: n
 * Return: largest number
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
