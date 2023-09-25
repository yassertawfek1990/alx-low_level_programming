#include "lists.h"

/**
 * listint_len - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
