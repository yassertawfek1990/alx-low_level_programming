#include "dog.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - returns the largest of 3 numbers
 * @name: d
 * @age: c
 * @owner: d
 * Return: largest number
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	if (!name || age < 0 || !owner)
		return (NULL);
	n = malloc(sizeof(dog_t));
	if (!n)
		return (NULL);
	n->name = malloc(strlen(name) + 1);
	if (!n->name)
	{
		free(n);
		return (NULL);
	}
	n->owner = malloc(strlen(owner) + 1);
	if (!n->owner)
	{
		free(n->name);
		free(n);
		return (NULL);
	}
	n->name = strdup(name);
	n->age = age;
	n->owner = strdup(owner);
	return (n);
}
