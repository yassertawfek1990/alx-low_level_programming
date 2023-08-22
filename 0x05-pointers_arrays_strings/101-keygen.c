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

#include <stdlib.h>
#include <time.h>


int main(void)
{
	int len = rand() % 10 + 1; // random length 1-10
  
	char password[11];
  
	srand(time(NULL));

	for(int i=0; i<len; i++) 
	{
		password[i] = rand() % 36 + '!'; // random char
  	}

	password[len] = '\0';

	printf("%s", password);
  
	return (0);
}
