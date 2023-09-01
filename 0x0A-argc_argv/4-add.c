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
	int x;
	int t;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (!atoi(argv[x]))
		{
			printf("Error\n");

			return (1);
		}
		if (atoi(argv[x]) > 0)
			t += atoi(argv[x]);
	}
	printf("%d\n", t);

	return (0);
}
