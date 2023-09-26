#include "lists.h"

/**
 * delete_nodeint_at_index - returns the largest of 3 numbers
 * @head: first intege
 * @index: ds
 * Return: largest number
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *m;
	listint_t *p;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return (1);
	}
	p = *head;
	while (p != NULL)
	{
		if (x == index)
		{
			m->next = p->next;
			free(p);
			return (1);
		}
		m = p;
		p = p->next;
		x++;
	}
	return (-1);
}
