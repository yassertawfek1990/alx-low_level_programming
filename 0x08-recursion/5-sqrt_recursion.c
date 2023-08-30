#include "main.h"

/**
 * _sqrt_recursion - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 1;

	return (sq(n, x));
}
/**
 * sq - returns the largest of 3 numbers
 * @n: first intege
 * @x: d
 * Return: largest number
 */
int sq(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x < n)
		return (sq(n, x + 1));
	return (-1);
}
