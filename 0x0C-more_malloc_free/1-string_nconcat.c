#include "main.h"

/**
 * string_nconcat - returns the largest of 3 numbers
 * @s1: first in
 * @s2: d
 * @n: fdf
 * Return: largest number
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	unsigned int l1, l2, lt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;
	lt = l1 + n;
	p = (char *)malloc(sizeof(char) * (lt + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (i = 0; i < n; i++)
		p[l1 + i] = s2[i];
	p[lt] = '\0';

	return (p);
}
