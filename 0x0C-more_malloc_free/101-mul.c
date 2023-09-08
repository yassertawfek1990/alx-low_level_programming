#include "main.h"
/**
 * id - returns theng
 * @u: the  length to check
 * Return: integer leng
 */
int id(int u)
{
	return (u >= 48 && u <= 57);
}
/**
 * mb - mulmber strings
 * @v1: the fi
 * @v2: cond big numtring
 * Return: the pg number string
 */
char *mb(char *v1, char *v2)
{
	char *b;
	int j1, j2, d, f, g, h;

	j1 = strlen(v1);
	j2 = strlen(v2);
	b = malloc(d = h = j1 + j2);
	if (!b)
		printf("Error\n"), exit(98);
	while (d--)
		b[d] = 0;

	for (j1--; j1 >= 0; j1--)
	{
		if (!id(v1[j1]))
		{
			free(b);
			printf("Error\n"), exit(98);
		}
		d = v1[j1] - 48;
		g = 0;

		for (j2 = strlen(v2) - 1; j2 >= 0; j2--)
		{
			if (!id(v2[j2]))
			{
				free(b);
				printf("Error\n"), exit(98);
			}
			f = v2[j2] - 48;

			g += b[j1 + j2 + 1] + (d * f);
			b[j1 + j2 + 1] = g % 10;

			g /= 10;
		}
		if (g)
			b[j1 + j2 + 1] += g;
	}
	return (b);
}

/**
 * main - multiply two big number strings
 * @argc: the of arguments
 * @argv: the argumen
 * Return: Alwccess.
 */

int main(int argc, char **argv)
{
	char *t;
	int q, w, e;

	if (argc != 3)
		printf("Error\n"), exit(98);

	e = strlen(argv[1]) + strlen(argv[2]);
	/* Memory barrier */
	t = mb(argv[1], argv[2]);
	w = 0;
	q = 0;
	while (w < e)
	{
		if (t[w])
			q = 1;
		if (q)
			_putchar(t[w] + 48);
		w++;
	}
	if (!q)
		_putchar(48);
	_putchar('\n');
	free(t);
	return (0);
}
