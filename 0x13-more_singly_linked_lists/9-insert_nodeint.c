#include "lists.h"

/**
 * insert_nodeint_at_index - returns the largest of 3 numbers
 * @head: first intege
 * @idx: ds
 * @n: d
 * Return: largest number
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *m;
	listint_t *p;

	m = malloc(sizeof(listint_t));
	if (!head || !m)
		return (NULL);
	m->n = n;
	m->next = NULL;
	if (!idx)
	{
		m->next = *head;
		*head = m;
		return (m);
	}
	p = *head;
	while (p != NULL)
	{
		if (x == idx - 1)
		{
			m->next = p->next;
			p->next = m;
			return (m);
		}
		p = p->next;
		x++;
	}
	free(m);
	return (NULL);
}
