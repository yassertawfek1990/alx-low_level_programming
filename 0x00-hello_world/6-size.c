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
	printf("Size of a char: %llu byte(s)\n", sizeof(char));
	printf("Size of an int: %llu byte(s)\n", sizeof(int));
	printf("Size of a long int: %llu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %llu byte(s)\n", sizeof(float));
	return (0);
}
