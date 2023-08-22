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

int main (void)
{
    int t;
    char b;
    
    srand(time(NULL)); 

    for (t = 0; t <= 2645; t += b)
    
    {
        b = ran() % 128;
        putchar(b);
    }

    putchar(2772 - t);
    
    return (0);
}
