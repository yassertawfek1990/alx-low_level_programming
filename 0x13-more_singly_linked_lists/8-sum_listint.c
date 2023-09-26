#include "lists.h"

/**
 * sum_listint - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

int sum_listint(listint_t *head)
{
	unsigned int t = 0;
	listint_t *p = head;

	while (p != NULL)
	{
		t += p->n;
		p = p->next;
	}
	return (t);
}
