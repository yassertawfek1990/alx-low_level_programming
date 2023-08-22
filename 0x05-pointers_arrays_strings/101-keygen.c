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
    char password[6];

    srand(time(NULL));
    
    password[0] = rand() % 26 + 'A';
    password[1] = rand() % 26 + 'a';
    password[2] = rand() % 10 + '0';
    password[3] = rand() % 26 + 'A';
    password[4] = rand() % 26 + 'a';
    password[5] = '\0';

    printf("%s", password);

    return (0);
}
