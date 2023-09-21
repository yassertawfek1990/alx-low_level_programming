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
		if (head->str != NULL)
			free(head->str);
		if (head->len)
			free(head->str);
		if (head->next != NULL)
			free(head->next);
		free (head);
		head = x;
	}
}
