#include "main.h"

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{ 
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long s;
	int c;

	for ( c = 0; c < 50; c++)
	{
		s = f1 + f2;
		printf("%d", s);

		f1 = f2;
		f2 = s;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
