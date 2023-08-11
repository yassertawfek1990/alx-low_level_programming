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
	char cap = 'A';

	while (da <= 'z')
	{
		putchar(da);
		da++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
