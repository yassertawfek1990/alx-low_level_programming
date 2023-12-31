#include "lists.h"

/**
 * add_node - returns the largest of 3 numbers
 * @head: first intege
 * @str: dkd
 * Return: largest number
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

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
	p->next = *head;
	*head = p;
	return (p);
}
