#include "main.h"

/**
 * cap_string - returns the largest of 3 numbers
 * @str: first integer
 * Return: largest number
 */

char *cap_string(char *str)
{
	int i;
	int x;
	char d[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < strlen(str); i++)
	{
		for (x = 0; x <= 12; x++)
		{
			if (str[i] == d[x])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = (65 + (str[i + 1] - 97));
				}
			}
		}
	}
	return (str);
}
