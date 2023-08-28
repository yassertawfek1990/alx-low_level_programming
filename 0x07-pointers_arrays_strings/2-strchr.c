#include "main.h"

/**
 * _strchr - returns the largest of 3 numbers
 * @s: first intege
 * @c:d
 * Return: largest number
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
