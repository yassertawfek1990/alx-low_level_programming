#include "lists.h"

/**
 * list_len - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;
	size_t c = 0;

	while (h)
	{
		if (h->str != NULL)
			c++;
		h = h->next;
		x++;
	}
	return (c);
}
