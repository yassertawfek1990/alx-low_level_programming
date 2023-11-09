#include "lists.h"

/**
 * sum_dlistint - s
 * @head: doubl
 * @index: ind
 * Return: if the no
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c;
	unsigned int x;

	if (!head)
		return (0);
	c = head;
	x = 0;
	while (c != NULL)
	{
		x += c->n;
		c = c->next;
	}
	return (c);
}	
