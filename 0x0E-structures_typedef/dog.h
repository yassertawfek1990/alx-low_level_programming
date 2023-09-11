#ifndef DOG_H
#define DOG_H

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
