#include <stdio.h>
#include <unistd.h>
/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(void)
{
	char *error = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
	write(2, error, strlen(error));
        return (1);
}
