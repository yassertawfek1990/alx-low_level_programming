#include "lists.h"

/**
* find_listint_loop - Prints a listint_t list safely
* @head: A pointer to the head of the listint_t list
*
* Return: The number of nodes in the list
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a;
	listint_t *b;

	if (!head)
		return (NULL);
	for (b = head->next; b != NULL; b = b->next)
	{
		if (b == b->next)
			return (b);
		for (a = head; a != NULL; a = a->next)
		{
			if (a == b->next)
				return (b->next);
		}
	}
	return (NULL);
}
