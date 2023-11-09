#include "main.h"

/**
 * _strstr - returns the largest of 3 numbers
 * @haystack: first intege
 * @needle:d
 * Return: largest number
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int l = strlen(needle);
	int c = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] == needle[x])
			{
				c++;
			}
			else
				break;
		}
		if (c == l)
			return (haystack + i);
		c = 0;
	}
	return ('\0');
}
