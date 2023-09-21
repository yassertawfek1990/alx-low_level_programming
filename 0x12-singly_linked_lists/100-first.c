#include "lists.h"

void print_poem(void) __attribute__((constructor));

/**
 * print_poem - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

void print_poem(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
