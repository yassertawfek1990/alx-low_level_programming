#include "main.h"

/**
 * _strncpy - returns the largest of 3 numbers
 * @src: first integer
 * @dest: second integer
 * @a: d
 * Return: largest number
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[d] = src[d];

	for ( ; d < n; d++)
		dest[d] = '\0';

	return (dest);
}
