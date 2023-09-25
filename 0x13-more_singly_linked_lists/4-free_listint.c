#include "lists.h"

/**
 * free_listint - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
