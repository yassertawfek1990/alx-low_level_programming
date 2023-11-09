#include "lists.h"

/**
 * print_dlistint - pr_t list.
 * @h: pointer
 * Return: numbe
 */

size_t print_dlistint(const dlistint_t *h)
{

	int c;

	c = 0;
	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c = c + 1;
	}
	return (c);
}
