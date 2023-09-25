#include "lists.h"

/**
 * print_listint - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
