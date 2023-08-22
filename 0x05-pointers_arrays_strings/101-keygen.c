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

int main(void) {

	int r, sum;
	char password;
  sum = 0, len = 0;
  password[100];

  srand(time(NULL)); 

  while (sum < 2772) {
    r = rand() % 94 + 33;

    sum += r;
    password[len++] = r;

    if (sum > 2700) 
      break; 
  }

  if (2772 - sum < 127) {
    password[len++] = 2772 - sum; 
  }

  password[len] = '\0';

  printf("%s", password);

  return 0;
}
