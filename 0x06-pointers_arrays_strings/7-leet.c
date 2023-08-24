#include "main.h"

/**
 * leet - returns the largest of 3 numbers
 * @str: first integer
 * Return: largest number
 */

char *leet(char *str)
{
	int i;
	int x;

	char d[] = {"a", "e", "o", "t", "l"};
	int a[] = {4. 3, 0, 7, 1};
	int l = strlen(str);

	for (i = 0; i < l && str[i] != '\0'; i++)
	{
		if (str[i + 1] != '\0')
		{
			for (x = 0; x <= 4; x++)
			{
				if (str[i] == d[x] || str[i] == d[x] - 32)
				{
					str[i] = a[x] + 48;
				}
			}
		}
	}
	return (str);
}
