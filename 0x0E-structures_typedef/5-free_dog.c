#include "dog.h"
#include <stdio.h>

/**
 * free_dog - returns the largest of 3 numbers
 * @d: first intege
 * Return: largest number
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (*d.name)
			free(*d.name);
		if (*d.owner)
			free(*d.owner);
		free(d);
	}
}
