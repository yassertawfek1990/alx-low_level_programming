#include "lists.h"

/**
 * free_listint2 - returns the largest of 3 numbers
 * @head: first intege
 * Return: largest number
 */

void free_listint2(listint_t **head)
{
	listint_t *x;
	listint_t **m = head
	
	if (m)
	{
		while (*h)
		{
			x = *h;
			free(x);
			*h = (*h)->next;
		}
	}
		*m = NULL;
	}
}
