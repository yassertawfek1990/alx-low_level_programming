#include "main.h"
/**
 * strtow - returns the largest of 3 numbers
 * @str: first intege
 * Return: largest number
 */
char **strtow(char* str)
{
	int q;
	int z;
	int e;
	int r;
	int y;
	int u;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	y = d(str);
	if (y == 1)
		return (NULL);
	p = (char**)malloc(y * sizeof(char*));
	if (p == NULL)
		return (NULL);
	p[y - 1] = NULL;
	q = 0;
	while (str[q])
	{
		if (str[q] != 32 && (q == 0 || str[q - 1] == 32))
		{
			for (z = 1; str[q + z] != 32 && str[q + z]; z++)
				;
			z++;
			p[u] = (char *)malloc(z * sizeof(char));
			z--;
			if (p[u] == NULL)
			{
				for (e = 0; e < u; e++)	
					free(p[e]);
				free(p[y - 1]);
				free(p);
				return (NULL);
			}
			for (r = 0; r < z; r++)
				p[u][r] = str[q + r];
			p[u][r] = '\0';
			u++;
			q = q + z;
		}
		else
			q++;
	}
	return (p);
}
/**
 * d - returns the largest of 3 numbers
 * @a: first intege
 * Return: largest number
 */
int d(char *a)
{
	int v;
	int b;

	b = 0;
	for (v = 0; a[v]; v++)
	{
		if (a[v] == 32)
		{
			if (a[v + 1] != 32 && a[v + 1] != '\0')
				b++;
		}
		else if (v == 0)
			b++;
	}
	b++;
	return (b);
}
