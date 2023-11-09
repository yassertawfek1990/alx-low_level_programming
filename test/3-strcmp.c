#include "main.h"

/**
 * _strcmp - returns the largest of 3 numbers
 * @s1: first integer
 * @s2: second integer
 * Return: largest number
 */

int _strcmp(char *s1, char *s2)
{
	int d;
	int x;

	for (d = 0; (s1[d] != '\0' && s2[d] != '\0'); d++)
	{
		if (s1[d] == s2[d])
			x = 0;
		else if (s1[d] > s2[d])
		{
			x = s1[d] - s2[d];
			break;
		}
		else if (s1[d] < s2[d])
		{
			x = s1[d] - s2[d];
			break;
		}
	}
	return (x);
}
