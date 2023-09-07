
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
	void *x;
	unsigned int i;
	unsigned char *s;
	unsigned char *k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		x = malloc(new_size);
		if (!x)
		{
			return (NULL);
		}
		s = (unsigned char *)ptr;
		k = (unsigned char *)x;
		for (i = 0; i < old_size && i < new_size; i++)
			k[i] = s[i];
		free(ptr);
	}
	return (x);
}
