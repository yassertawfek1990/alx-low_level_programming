#include "main.h"

/**
 * wildcmp - returns the largest of 3 numbers
 * @s1: first intege
 * @s2: d
 * Return: largest number
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 2));
}
