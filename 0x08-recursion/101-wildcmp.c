#include "main.h"

/**
 * wildcmp - returns the largest of 3 numbers
 * @s1: first intege
 * @s2: d
 * Return: largest number
 */

int wildcmp(char *s1, char *s2)
{
	int t;

	t = 0;

	if (!*s1 && *s2 == '*' && !*q(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = q(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			t = t + wildcmp(s1 + 1, s2 + 1);
		t = t + a(s1, s2);

		return (!!t);
	}
	return (0);
}

/**
 * q - returns the largest of 3 numbers
 * @s2: d
 * Return: largest number
 */

char *q(char *s2)
{
	if (*s2 == '*')
		return (q(s2 + 1));
	else
		return (s2);
}

/**
 * a - returns the largest of 3 numbers
 * @s1: first intege
 * @s2: d
 * Return: largest number
 */
int a(char *s1, char *s2)
{
	int t;

	t = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		t = t + wildcmp(s1 + 1, s2 + 1);
	t = t + a(s1 + 1, s2);

	return (t);
}
