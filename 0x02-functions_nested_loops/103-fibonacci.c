#include "main.h"

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long s;
	float t;

	while (1)
	{

		s = f1 + f2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			t += s;

		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", t);

	return (0);
}
