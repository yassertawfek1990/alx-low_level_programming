#include "hash_tables.h"

/**
 * key_index - Get the inde
 * @key: The key
 * @size: The si
 * Return: The
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
