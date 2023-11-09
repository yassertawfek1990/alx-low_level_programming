#include "lists.h"

/**
 * free_dlistint - pr_t list.
 * @head: pointer
 * Return: numbe
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *he;
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		h = head->next;
		free(head);
	}
}
