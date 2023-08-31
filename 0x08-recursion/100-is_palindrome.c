#include "main.h"

/**
 * is_palindrome - returns the largest of 3 numbers
 * @s: first intege
 * Return: largest number
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	return (pl(s, 0, l - 1));
}
/**
 * pl - returns the largest of 3 numbers
 * @s: first intege
 * @b: c
 * @e: d
 * Return: largest number
 */

int pl(char *s, int b, int e)
{
	if (b >= e)
		return (1);
	if (s[b] != s[e])
		return (0);
	return (pl(s, b + 1, e - 1));
}
