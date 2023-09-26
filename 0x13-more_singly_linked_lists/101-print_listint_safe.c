#include "lists.h"

/**
* print_listint_safe - Prints a listint_t list safely
* @head: A pointer to the head of the listint_t list
*
* Return: The number of nodes in the list
*/

size_t	print_listint_safe(const listint_t *head)
{
	int j;
	const listint_t	*current = head;
	size_t	nodes = 0;
	const listint_t	*node_addrs[4096];
	int i = 0;

	while (current)
	{
		node_addrs[i++] = current;
		nodes++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (i > 0)
		{
			for (j = 0; j < i - 1; j++)
			{
				if (current->next == node_addrs[j])
				{
					printf("-> [%p] %d\n", (void *)current->next, current->next->n);
					exit(98);
				}
			}
		}

		current = current->next;
	}
	return (nodes);
}
