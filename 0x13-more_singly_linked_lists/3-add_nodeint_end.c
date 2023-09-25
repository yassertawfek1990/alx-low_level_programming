#include "lists.h"

/**
 * add_nodeint_end - returns the largest of 3 numbers
 * @head: first intege
 * @n: dkd
 * Return: largest number
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *t = *head;

	p = malloc(sizeof(listint_t));
	if (!head || !p)
		return (NULL);
	if (t)
	{
		p->n = n;
		while (t->next)
			t = t->next;
		t->next = p;
	}
	else
		*head = p;
	return (p);
}
