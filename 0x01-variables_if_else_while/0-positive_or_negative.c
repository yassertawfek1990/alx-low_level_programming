#include <stdlib.h>
#include <time.h>

/**
 * main - Enter program
 *
 * Description: C program prints using if command
 *
 * Return: always return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	} 
	else if (n == 0) 
	{
		printf("%d is zero\n", n);
	} 
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}