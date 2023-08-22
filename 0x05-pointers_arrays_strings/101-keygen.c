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

	while (x <= 2645)
	{
		y = rand() % 128;
		x += y;
		putchar(y);
	}
	putchar(2773 - x);
	return (0);
}
