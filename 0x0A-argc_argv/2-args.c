#include <stdio.h>

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

	for (x = 1; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
