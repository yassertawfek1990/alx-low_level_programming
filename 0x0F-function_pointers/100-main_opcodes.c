#include "function_pointers.h"

/**
 * main - Enter program
 * Description: C program prints using printf command
 * @argc: s
 * @argv: cx
 * Return: always return 0
*/

int main(int argc, char **argv)
{
	int n;
	char *x = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n--)
		printf("02hhx%s", *x++, n ? " " : "\n");
	return (0);
}
