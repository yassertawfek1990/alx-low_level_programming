#include <stdio.h>

/**
 * main - Enter program
 *
 * Description: C program prints the size of various types
 *
 * Return: always return 0
*/

int main(void)
{
	printf("Size of a char\n", sizeof(char));
	printf("Size of a int\n", sizeof(int));
	printf("Size of a long int\n", sizeof(long int));
	printf("Size of a long long int\n", sizeof(long long int));
	printf("Size of a float\n", sizeof(float));
	return (0);
}
