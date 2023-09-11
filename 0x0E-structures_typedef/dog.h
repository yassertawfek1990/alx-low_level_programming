#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - returns the largest of 3 numbers
 * @name: first intege
 * @age: f
 * @owner: dv
 * Description: largest number
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H */
