#include "lists.h"

/**
 * get_dnodeint_at_index - s
 * @head: doubl
 * @index: ind
 * Return: if the no
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c;
	unsigned int x;

	c = head;
	x = 0;
	while (c != NULL)
	{
		if (x == index)
			return (c);
		c = c->next;
		x++;
	}
	return (NULL);
}
