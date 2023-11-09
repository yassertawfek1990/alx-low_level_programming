#include "main.h"

/**
 * _strcat - returns the largest of 3 numbers
 * @src: first integer
 * @dest: second integer
 * Return: largest number
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[d] != '\0')
	{
		dest[i] = src[d];
		i++;
		d++;
	}

	dest[i] = '\0';

	return (dest);
}
