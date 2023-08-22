#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	int x = 0;
	char y;

	srand(time(NULL));

	while (x < 2198)
	{
		y = rand() % 62;
		x += y;

		if (y < 26)
			putchar('a' + y);
		else if (y <52)
			putchar('A' + y - 26);
		else
			putchar('o' + y - 52);
	}
	putchar(500 + x);
	return (0);
}
