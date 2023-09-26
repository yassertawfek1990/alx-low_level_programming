#include "lists.h"

/**
 * get_nodeint_at_index - returns the largest of 3 numbers
 * @head: first intege
 * @index: ds
 * Return: largest number
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x = 0;
	listint_t *m;
	listint_t *p = head;

	m = malloc(sizeof(listint_t));
	if (m)
	{
		while (p != NULL)
		{
			if (x == index)
			{
				m = p;
				return (m);
			}
			p = p->next;
			x++;
		}
	}
	return (NULL);
}
