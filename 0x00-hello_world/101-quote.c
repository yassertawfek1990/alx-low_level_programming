#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	char *errormessage = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, errormessage, strlen(errormessage));
        return (1);
}
