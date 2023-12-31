#include "main.h"

/**
 * _strncat - returns the largest of 3 numbers
 * @src: first integer
 * @dest: second integer
 * @n: d
 * Return: largest number
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[i] = src[d];
		i++;
	}

	return (dest);
}
