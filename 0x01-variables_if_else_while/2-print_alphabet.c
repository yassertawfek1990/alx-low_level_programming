#include <stdio.h>
/**
 * main - Enter program
 *
 * Description: C program prints using while command
 *
 * Return: always return 0
*/
int main(void)
{
	char da = 'a';

	while (da <= 'z')
	{
		putchar(da);
		da++;
	}
	putchar('\n');
	return (0);
}
