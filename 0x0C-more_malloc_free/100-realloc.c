
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
	unsigned char *s;
	unsigned char *k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (ptr != NULL && new_size == 0)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (!p)
		{
			return (NULL);
		}
		s = (unsigned char *)ptr;
		k = (unsigned char *)p;
		for (i = 0; i < old_size && i < new_size; i++)
			k[i] = s[i];
		free(ptr);
	}
	return (p);
}
