#include "lists.h"

/**
 * add_dnodeint_end - pr_t list.
 * @head: pointer
 * @n: vf
 * Return: numbe
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->prev = *head;
	h->next = NULL;
	if (*head != NULL)
		(*head)->next = h;
	*head = h;
	return (h);
}
