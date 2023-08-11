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
	char da = 'z';

	while (da >= 'a')
	{
		putchar(da);
		da--;
	}
	putchar('\n');
	return (0);
}
