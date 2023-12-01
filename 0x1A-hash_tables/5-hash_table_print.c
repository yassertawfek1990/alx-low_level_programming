#include "hash_tables.h"

/**
 * hash_table_print - Prin
 * @ht: A pointe
 * Description: Key/valu
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int j;
	unsigned char c = 0;

	c = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (c == 1)
				printf(", ");
			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
