#include "main.h"

/**
 * _strspn - returns the largest of 3 numbers
 * @s: first intege
 * @accept:d
 * Return: largest number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;
	unsigned int c = 0;
	unsigned int b = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				c++;
				break;
			}
		}
		if (c > 0)
			b++;
		if (b > c)
			break;
	}
	return (c);
}
