#include "dog.h"

/**
 * init_dog - returns the largest of 3 numbers
 * @d: first intege
 * @name: d
 * @age: c
 * @owner: d
 * Return: largest number
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		*d.name = name;
		*d.age = age;
		*d.owner = owner;
	}
}
