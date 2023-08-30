#include "main.h"

/**
 * _pow_recursion - returns the largest of 3 numbers
 * @x: first intege
 * @y: d
 * Return: largest number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x = x * (_pow_recursion(x, y - 1));
	return (x);
}
