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
  int sum = 0;
  int len = 0;
  char password[20];

  srand(time(NULL));

  while (sum < 2772) {
    int ascii = rand() % 94 + 33; // random printable ASCII 

    sum += ascii;
    password[len++] = ascii;
  }

  password[len] = '\0';

  printf("%s", password);

  return (0); 
}
