#include "main.h"

/**
 * rot13 - returns the largest of 3 numbers
 * @str: first integer
 * Return: largest number
 */

char *rot13(char *str)
{
	int i;
	unsigned int x;

	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int l = strlen(str);

	for (i = 0; i < l && str[i] != '\0'; i++)
	{
		for (x = 0; x <= 51; x++)
		{
			if (str[i] == d[x])
			{
				str[i] = a[x];
				break;
			}
		}
	}
	return (str);
}
