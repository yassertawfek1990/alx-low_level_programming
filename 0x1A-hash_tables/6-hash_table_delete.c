#include "hash_tables.h"

/**
 * hash_table_delete - Dele.
 * @ht: A.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h;
	hash_node_t *n;
	unsigned long int j;
	hash_node_t *t;

	h = ht;
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			n = ht->array[j];
			while (n != NULL)
			{
				t = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = t;
			}
		}
	}
	free(h->array);
	free(h);
}
