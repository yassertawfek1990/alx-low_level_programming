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
		y = rand() % 198;
		x += y;
		putchar(y);
	}
	putchar(500 + x);
	return (0);
}
