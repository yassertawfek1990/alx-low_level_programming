#include "lists.h"

/**
 * reverse_listint - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *g = NULL;

	if (!head || !*head)
		return (NULL);
	p = *head;
	*head = NULL;
	while (p != NULL)
	{
		g = p->next;
		p->next = *head;
		*head = p;
		p = g;
	}
	return (*head);
}
