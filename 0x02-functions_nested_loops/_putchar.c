#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - print characte
 *
 * @x: the character we print
 *
 * Return: always return
*/

int _putchar(char x)
{
	return (write(1, &x, 1));
}
