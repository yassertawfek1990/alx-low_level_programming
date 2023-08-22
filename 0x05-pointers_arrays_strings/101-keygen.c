#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	int sum = 0;
	int len = 0;
	char password[20];

	srand(time(NULL));

	while (len < 20) 
	{
		if (sum > 2700)
			break;

		int r = rand() % 94 + 33;
		sum += r;
		password[len++] = r;
	}

	int remaining = 2772 - sum;
	if (remaining < 127) 
	{
		password[len++] = remaining;
	}

	password[len] = '\0';

	printf("%s", password);

	return 0;
}
