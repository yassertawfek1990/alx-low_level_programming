#include "hash_tables.h"

/**
 * shash_table_create - Creates
 * @size: The size
 * Return: If
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int j;

	h = malloc(sizeof(shash_table_t));
	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		h->array[j] = NULL;
	h->shead = NULL;
	h->stail = NULL;
	return (h);
}
/**
 * shash_table_set - Adds
 * @ht: A pointer
 * @key: The ke
 * @value: The value
 * Return: Upon
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *t;
	char *v;
	unsigned long int i;
	shash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v = strdup(value);
	if (v == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = v;
			return (1);
		}
		t = t->snext;
	}
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(v);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(v);
		free(n);
		return (0);
	}
	n->value = v;
	n->next = ht->array[i];
	ht->array[i] = n;

	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		n->sprev = t;
		n->snext = t->snext;
		if (t->snext == NULL)
			ht->stail = n;
		else
			t->snext->sprev = n;
		t->snext = n;
	}
	return (1);
}
/**
 * shash_table_get - Retrieve
 * @ht: A pointer
 * @key: The
 * Return: If the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;
	return ((n == NULL) ? NULL : n->value);
}
/**
 * shash_table_print - Prints
 * @ht: A pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints
 * @ht: A pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes
 * @ht: A pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h;
	shash_node_t *t;
	shash_node_t *n;

	h = ht;
	if (ht == NULL)
		return;
	n = ht->shead;
	while (n)
	{
		t = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = t;
	}

	free(h->array);
	free(h);
}
