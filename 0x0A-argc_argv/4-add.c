#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter program
 * @argc: f
 * @argv: d
 * Description: C program prints using printf command
 * Return: always return 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
  int i;
  
  if (argc == 1) {
    printf("0\n");
    return 0;
  }
  
  for (i = 1; i < argc; i++) {
    if (!isdigit(argv[i][0])) {
      printf("Error\n");
      return 1;
    }
    sum += atoi(argv[i]);
  }
  
  printf("%d\n", sum);
  
  return 0;
}
