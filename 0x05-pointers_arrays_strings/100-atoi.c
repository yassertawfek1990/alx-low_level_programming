#include "main.h"

/**
 * _atoi - returns the largest of 3 numbers
 * @*s: first inte
 * Return: largest number
 */

int _atoi(char *s)
{
	int l = strlen(s);
	int i;
	unsigned int n;
	int sign = 1;
	n = 0;
	
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= 0 && s[i] <= 9)
			n = (n * 10) + (s[i] - '0');
		else if (n > 0)
			break;
	}
	return (n * sign);
}
