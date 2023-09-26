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
	size_t x = 0;
	listint_t *m;
	listint_t *p = *head;

	m = malloc(sizeof(listint_t));
	if (m)
	{
		while (p != NULL)
		{
			if (x == idx - 1)
			{
				m->n = n;
				m->next = p->next;
				p->next = m;
				return (p);
			}
			p = p->next;
			x++;
		}
	}
	return (NULL);
}
