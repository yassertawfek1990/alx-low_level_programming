#include "main.h"


/**
 * sq - returns the largest of 3 numbers
 * @s: n
 * Return: largest number
 */

double sq(double s)
{
	double r;
	int f;

	r = s / 3;

	if (s <= 0)
		return (0);

	for (f = 0; f < 32; f++)
		r = (r + s / r) / 2;

	return (r);
}

/**
 * lpf - returns the largest of 3 numbers
 * @n: n
 * Return: largest number
 */

void lpf(long long n)
{
	long long max;
	long long i;

	while (n % 2 == 0)
		n = n / 2;
	for (i = 3; i <= sq(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%lld\n", max);
}


/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	lpf(612852475143);

	return (0);
}
