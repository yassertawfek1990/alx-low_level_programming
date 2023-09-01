#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter program
 * @argc: f
 * @argv: d
 * Description: C program prints using printf command
 * Return: always return 0
*/

int main(int argc, char *argv[])
{
	int t;
	char *p;

	t = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < 48 || *c > 57)
				printf("Error\n");
				return (1);
		t = t + atoi(argv[argc]);
	}
	printf("%d\n", t);
	return (0);
}
