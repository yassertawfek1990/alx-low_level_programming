#include "hash_tables.h"

/**
 * hash_table_create - Create
 * @size: The
 * Return: If
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int j;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);
	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		t->array[j] = NULL;
	return (t);
}
