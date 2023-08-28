#include "main.h"

/**
 * _strpbrk - returns the largest of 3 numbers
 * @s: first intege
 * @accept:d
 * Return: largest number
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
		{
			return (s + i);
		}
	}
	return ('\0');
}
