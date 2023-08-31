#include "main.h"

/**
 * is_palindrome - returns the largest of 3 numbers
 * @s: first intege
 * Return: largest number
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	if (*s == '\0')
		return (1);
	if (s[0] != s[l - 1])
		return (0);
	s[l - 1] = '\0';
	return (is_palindrome(s + 1));
}
