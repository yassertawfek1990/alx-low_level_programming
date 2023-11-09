#include "lists.h"

/**
 * add_dnodeint - pr_t list.
 * @head: pointer
 * @n: vf
 * Return: numbe
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->prev = NULL;
	h->next = *head;
	if (*head != NULL)
		(*head)->prev = h;
	*head = h;
	return (h);
}
