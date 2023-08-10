#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Enter program
 *
 * Description: prints using write command
 *
 * Return: always return 1
*/

int main(void)
{
	char *e = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, e, strlen(e));
	return (1);
}
