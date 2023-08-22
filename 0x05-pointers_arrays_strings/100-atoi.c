#include "main.h"

/**
 * _atoi - returns the largest of 3 numbers
 * @*s: first inte
 * Return: largest number
 */

int _atoi(char *s)
{
	int m;
	int x;

	m = 1;
	x = 0;

	while (*s)
	{
		if (*s == '-')
			m = -1;
		else if (*s >= '0' && *s <= '9')
			x = x * 10 + (*s - '0');

		else if (x > 0)
			break;
		s++;
	}

	return (x * m);
}
