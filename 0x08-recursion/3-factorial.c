#include "main.h"

/**
 * factorial - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
