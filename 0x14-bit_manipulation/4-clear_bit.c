#include "main.h"

/**
*clear_bit - sets aon to 0
*@n:r to be used
*@index: position t
*
*Return: 1s, -1 on fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
