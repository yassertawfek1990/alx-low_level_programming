#include "main.h"

/**
 * _strlen_recursion - returns the largest of 3 numbers
 * @s: first intege
 * Return: largest number
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		n = n +  _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
