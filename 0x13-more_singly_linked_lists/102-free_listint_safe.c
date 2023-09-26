#include "lists.h"

/**
* free_listint_safe - returns the largest of 3 numbers
* @h: first intege
* Return: largest number
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *tmp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		len++;
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*h = NULL;
	return (len);
}
