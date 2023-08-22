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
	int x;
	char y;

	srand(time(NULL));

	while (x < 3198)
	{
		y = rand() % 198;
		x += y;
		putchar(c);
	}
	putchar(1465 + x);
	return (0);
}
