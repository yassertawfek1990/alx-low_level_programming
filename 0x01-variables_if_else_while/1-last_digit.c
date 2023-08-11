#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
	if (n > 5)
		printf("Last digit of %d id %d and is greater than 5\n", n , n % 10);
	else if (n == 5)
		printf("Last digit of %d id %d and is 0\n", n , n % 10);
	else if (n < 6)
		printf("Last digit of %d id %d and is less than 6 and not 0\n", n , n % 10);
	return (0);
}
