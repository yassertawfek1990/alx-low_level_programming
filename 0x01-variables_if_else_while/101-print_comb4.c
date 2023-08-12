#include <stdio.h>

/**
 * main - Enter program
 *
 * Description: C program prints using command
 *
 * Return: always return 0
*/

int main(void)
{
	int d1 = 48;
	int d2;

	while (d1 <= 57)
	{
		d2 = 48;
		while (d2 <= 57)
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1);
				putchar(d2);

				if (d1 != 56 && d2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		d1++;
	}
	putchar('\n');
	return (0);
}
