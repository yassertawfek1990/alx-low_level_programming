#include "lists.h"

/**
 * print_list - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%lu] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		x++;
		h = h->next;
	}
	return (x);
}
