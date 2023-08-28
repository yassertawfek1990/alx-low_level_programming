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
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
			return (s + i);
			}
		}
	}
	return ('\0');
}
