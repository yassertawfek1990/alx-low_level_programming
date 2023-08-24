#include "main.h"

/**
 * string_toupper - returns the largest of 3 numbers
 * @str: first integer
 * Return: largest number
 */

char *string_toupper(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
		if (str[d] >= 97 && str[d] <= 122)
			str[d] = (65 + (str[d] - 97));
	}

	return (str);
}
