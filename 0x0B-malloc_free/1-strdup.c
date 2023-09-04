#include "main.h"

/**
 * _strdup - returns the largest of 3 numbers
 * @str: first in
 * Return: largest number
 */

char *_strdup(char *str)
{
	char *p;
	int l;

	l = strlen(str);

	p = (char *)malloc(sizeof(char) * (l + 1));
	if (p == NULL || l <= 0)
		return (NULL);
	while (l--)
	{	p[l] = str[l];
	}

	return (p);
}
