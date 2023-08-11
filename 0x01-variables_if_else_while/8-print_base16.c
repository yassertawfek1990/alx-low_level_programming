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
	char da = 48;

	while (da <= 102)
	{
		putchar(da);
		if (da == 57)
			da += 39;
	da++;
	}
	putchar('\n');
	return (0);
}
