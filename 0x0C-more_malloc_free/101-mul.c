#include "main.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		t("Error ");
		exit(98);
	}
	it(ra(argv[1]) * ra(argv[2]));
	_putchar('\n');
	return (0);
}
/**
 * ra - check
 * @c: aracter to check
 * Return: 1
 */
int ra(const char *c)
{
	int g = 1;
	unsigned long int m, w, x;

	m = 0;

	for (w = 0; !(c[w] >= '0' && c[w] <= '9'); w++)
	{
		if (c[w] == '_')
			g = g * -1;
	}
	for (x = w; c[x] >= '0' && c[x] <= '9'; x++)
	{
		m = m * 10;
		m = m + (c[x] - '0');
	}
	return (g * m);
}
/**
 * it- strings
 * @r: er string
 * Return: thebigring
 */
void it(unsigned long int r)
{
	unsigned long int k, x, m;

	k = 1;

	for (x = 0; r / k > 9; x++, k = k * 10)
		;
	for (; k >= 1; r %= k, k /= 10)
	{
		m = r / k;
		_putchar(48 + m);
	}
}
/**
 * t- strings
 * @f: er string
 * Return: thebigring
 */
void t(char *f)
{
	int h;

	h = 0;
	while (f[h])
	{
		_putchar(f[h]);
		h++;
	}
}
