#include "main.h"

/**
 * _memset - returns the largest of 3 numbers
 * @n: first intege
 * @b:d
 * @s:d
 * Return: largest number
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
		s[i] = b;

	return (s);
}
