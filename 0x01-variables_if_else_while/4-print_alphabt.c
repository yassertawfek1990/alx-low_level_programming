#include <stdio.h>

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	char da = 'a';

	while (da <= 'z')
	{
		if (da == 'e' || da == 'q')
			da++;
		putchar(da);
		da++;
	}
	putchar('\n');
	return (0);
}
