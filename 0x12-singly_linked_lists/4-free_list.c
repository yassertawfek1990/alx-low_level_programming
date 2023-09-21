#include "lists.h"

/**
 * free_list - returns the largest of 3 numbers
 * @h: first intege
 * Return: largest number
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free (head);
		head = x;
	}
}
