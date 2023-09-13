#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*opfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opfunc = get_op_func(argv[2]);
	if (!opfunc)
	{
		printf("Error\n");
		exit(99);
	}
	num2 = atoi(argv[3]);
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opfunc(num1, num2));

	return (0);
}
