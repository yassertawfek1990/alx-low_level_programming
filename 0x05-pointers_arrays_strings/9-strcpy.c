#include "main.h"

/**
 * _strcpy - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second intege
 * Return: largest number
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
