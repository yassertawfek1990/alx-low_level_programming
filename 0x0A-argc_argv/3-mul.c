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

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	t = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", t);

	return (0);
}
