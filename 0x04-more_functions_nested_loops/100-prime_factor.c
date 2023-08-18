#include "main.h"
#include <math.h>

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
	for (i = 3; i <= sqrt(n); i = i + 2)
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
