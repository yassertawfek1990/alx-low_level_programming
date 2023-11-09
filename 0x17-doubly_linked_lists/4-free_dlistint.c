#include "lists.h"

/**
 * free_dlistint - pr_t list.
 * @head: pointer
 * Return: numbe
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
