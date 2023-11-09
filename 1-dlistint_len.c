#include "lists.h"

/**
 * dlistint_len - pr_t list.
 * @h: pointer
 * Return: numbe
 */

size_t dlistint_len(const dlistint_t *h)
{

	int c;

	c = 0;
	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		c = c + 1;
	}
	return (c);
}
