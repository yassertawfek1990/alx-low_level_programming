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
	int da = 48;

	while (da <= 57)
	{
		putchar(da);
		if (da < 57)
			putchar(',');
			putchar(32);	
		da++;
	}
	putchar('\n');
	return (0);
}
