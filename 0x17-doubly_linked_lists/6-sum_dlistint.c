#include "lists.h"

/**
 * sum_dlistint - s
 * @head: doubl
 * Return: if the no
 */

int sum_dlistint(dlistint_t *head)
{
	int x;

	x = 0;
	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
