#include "main.h"

/**
 * _atoi - returns the largest of 3 numbers
 * @s: first inte
 *
 * Return: largest number
 */

int _atoi(char *s)
{
	int m;
	unsigned int x;

	m = 1;
	x = 0;

	while (*s)
	{
		if (*s == '-')
			m = m * -1;
		else if (*s >= 48 && *s <= 57)
			x = x * 10 + (*s - 48);

		else
			break;
		s++;
	}

	return (x * m);
}
