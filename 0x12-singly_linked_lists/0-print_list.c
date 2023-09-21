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
		printf("[%zu] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
