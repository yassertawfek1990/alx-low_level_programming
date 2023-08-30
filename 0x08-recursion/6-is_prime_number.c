#include "main.h"

/**
 * is_prime_number - returns the largest of 3 numbers
 * @n: first intege
 * Return: largest number
 */
int is_prime_number(int n)
{
	return (pr(n, 2));
}
/**
 * pr - returns the largest of 3 numbers
 * @n: first intege
 * @x: f
 * Return: largest number
 */
int pr(int n, int x)
{
	if (x == n && n > 1)
		return (1);
	if (n % x == 0 || n <= 1)
		return (0);
	return (pr(n, x + 1));
}
