#include "lists.h"

/**
 * sum_dlistint - s
 * @head: doubl
 * Return: if the no
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c;
	int x;

	c = head;
	x = 0;
	while (c != NULL)
	{
		x += c->n;
		c = c->next;
	}
	return (x);
}	
