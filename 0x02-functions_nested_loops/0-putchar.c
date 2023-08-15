#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Enter program
 *
 * Description: C program prints using putchar
 *
 * Return: always return
*/

int _putchar(char x)
{
	return (write(1, &x, 1));
}
