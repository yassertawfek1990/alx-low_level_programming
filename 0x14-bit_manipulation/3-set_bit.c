#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the unsigned long int to modify
 * @index: The index, starting from 0, of the bit to set to 1
 *
 * Return: 1 if successful, -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
