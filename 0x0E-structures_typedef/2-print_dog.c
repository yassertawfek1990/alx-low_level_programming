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
		if (d->name = NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age = NULL)
        	        printf("Age: (nil)\n");
		else
			printf("Age: %d\n", d->age);
		if (d->owner = NULL)
        	        printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
