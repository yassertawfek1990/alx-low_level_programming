#include "lists.h"

/**
 * pop_listint - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int m;

	if (head)
	{
		m = (*head)->n;
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	return (m);
}
