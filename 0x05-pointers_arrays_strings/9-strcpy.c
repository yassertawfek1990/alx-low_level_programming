#include "main.h"

/**
 * _strcpy - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second intege
 * Return: largest number
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
