
#include "main.h"

/**
 * _realloc - returns the largest of 3 numbers
 * @ptr: k
 * @old_size: first intege
 * @new_size: fsf
 * Return: largest number
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;
	unsigned int *s;
	unsigned int *k;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		ptr = malloc(new_size);
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		p = malloc(new_size);
		if (!p)
		{
			free(ptr);
			return (NULL);
		}
		s = (unsigned int *)ptr;
		k = (unsigned int *)p;
		for (i = 0; i < (old_size / 4); i++)
			k[i] = s[i];
	}
		return (p);
}
