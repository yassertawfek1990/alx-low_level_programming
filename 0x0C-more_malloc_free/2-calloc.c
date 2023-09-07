
#include "main.h"

/**
 * _calloc - returns the largest of 3 numbers
 * @nmemb: first intege
 * @size: fsf
 * Return: largest number
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *s;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	s = (unsigned char*) p;
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (p);
}
