#include "hash_tables.h"

/**
 * hash_djb2 - Hash
 * @str: The
 * Return: The
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int x;

	h = 5381;
	while ((x = *str++))
		h = ((h << 5) + h) + x;
	return (h);
}
