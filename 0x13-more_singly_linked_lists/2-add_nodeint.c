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

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
