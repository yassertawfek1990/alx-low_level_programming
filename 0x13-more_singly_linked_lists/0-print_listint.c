#include "lists.h"

/**
 * print_listint - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;
	const listint_t *p = h;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		x++;
	}
	return (x);
}
