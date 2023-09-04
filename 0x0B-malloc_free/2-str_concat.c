#include "main.h"

/**
 * str_concat - returns the largest of 3 numbers
 * @s1: first in
 * @s2: d
 * Return: largest number
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, m, l1, l2, lt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	lt = l1 + l2;
	p = (char *)malloc(sizeof(char) * (lt + 1));
	if (!p)
		return (NULL);
	for (x = 0; x < l1; x++)
		p[x] = s1[x];

	for (m = 0; m < l2; m++)
	{
		p[x] = s2[m];
		x++;
	}
	p[x] = '\0';

	return (p);
}
