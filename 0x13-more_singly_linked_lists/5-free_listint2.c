#include "lists.h"

/**
 * free_listint2 - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

void free_listint2(listint_t **head)
{
	listint_t *x, *m;

	if (head == NULL)
		return;
	m = *head;
	while (m != NULL)
	{
		x = m;
		m = m->next;
		free(x);
	}
	*head = NULL;

}
