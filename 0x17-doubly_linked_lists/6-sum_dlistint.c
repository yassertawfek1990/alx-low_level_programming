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

	x = 0;
	for (c = head; c != NULL;  c = c->next)
	{
		x += c->n;
	}
	return (x);
}	
