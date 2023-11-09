#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a nod
 * @head: A poiistint_t.
 * @index: The inde
 * Return: U
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t;

	t = *head;
	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
	}
	if (t == *head)
	{
		*head = t->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		t->prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = t->prev;
	}
	free(t);
	return (1);
}
