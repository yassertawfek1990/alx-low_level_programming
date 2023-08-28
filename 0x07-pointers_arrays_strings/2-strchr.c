#include "main.h"

/**
 * _memset - returns the largest of 3 numbers
 * @s: first intege
 * @c:d
 * Return: largest number
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int x;

	x = strlen(s);

	for (i = 0; i < x; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL)
}
