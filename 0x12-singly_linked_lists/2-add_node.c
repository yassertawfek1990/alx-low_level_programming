#include "lists.h"

/**
 * add_node - returns the largest of 3 numbers
 * @head: first intege
 * @str: dkd
 * Return: largest number
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = &h
	return (p);
}
