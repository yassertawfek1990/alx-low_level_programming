#include "dog.h"

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
			printf("Name: (nil)");
		if (d->age = NULL)
        	        printf("Age: (nil)");
		if (d->owner = NULL)
        	        printf("Owner: (nil)");
		else
		{
			printf("Name: %s", d->name);
			printf("Age: %d", d->age);
			printf("Owner: %s", d->owner);
		}
	}
}
