#include "hash_tables.h"

/**
 * hash_table_set - Add or updat
 * @ht: A pointer
 * @key: The key
 * @value: The value
 * Return: Upo
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *v;
	unsigned long int j;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v = strdup(value);
	if (v == NULL)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	for (j = x; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = v;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(v);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = v;
	n->next = ht->array[x];
	ht->array[x] = n;
	return (1);
}
