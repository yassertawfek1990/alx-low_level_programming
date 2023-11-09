#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new
 * @h: A pointer to t
 * @idx: The position
 * @n: The integer f
 * Return: If the function
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t;
	dlistint_t *nx;

	t = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}
	if (t->next == NULL)
		return (add_dnodeint_end(h, n));
	nx= malloc(sizeof(dlistint_t));
	if (n == NULL)
		return (NULL);
	nx->n = n;
	nx->prev = t;
	nx->next = t->next;
	t->next->prev = nx;
	t->next = nx;
	return (nx);
}
