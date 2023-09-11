#include "dog.h"
#include <stdio.h>

/**
 * print_dog - returns the largest of 3 numbers
 * @d: first intege
 * Return: largest number
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name : d->name "(nil)");
		printf("Age: %f\n", d->age : d->age "(nil)");
		printf("Owner: %s\n", d->owner : d->owner "(nil)");
	}
}
