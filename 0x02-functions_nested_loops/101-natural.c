#include "main.h"

/**
 * main - Enter program
 *
 * Description: C program prints using putchar
 *
 * Return: always return
*/

int main(void)
{
	int n;
	int s;

	for (n = 0; n <1024; n++)
		if ((n % 3 == 0) && (n % 5 == 0))
			s += n;
	printf("%d\n", sum);

	return (0)	
}
