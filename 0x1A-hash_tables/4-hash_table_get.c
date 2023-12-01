#include "hash_tables.h"

/**
 * hash_table_get - Retrieve
 * @ht: A pointe
 * @key: The
 * Return: I
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);
	n = ht->array[x];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	return ((n == NULL) ? NULL : n->value);
}
