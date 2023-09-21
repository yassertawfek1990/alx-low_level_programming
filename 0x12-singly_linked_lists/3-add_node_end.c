#include "lists.h"

/**
 * add_node_end - returns the largest of 3 numbers
 * @head: first intege
 * @str: dkd
 * Return: largest number
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *n = *head;

	p = malloc(sizeof(list_t));
	if (!head || !p)
		return (NULL);
	if (str)
	{
		p->str = strdup(str);
		if (!p->str)
		{
			free(p);
			return (NULL);
		}
		p->len = strlen(str);
	}
	if (n)
	{
		while (n->next)
			n = n->next;
		n->next = p;
	}
	else
		*head = p;
	return (p);
}
