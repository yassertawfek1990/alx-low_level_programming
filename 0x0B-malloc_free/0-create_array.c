#include "main.h"

/**
 * create_array - returns the largest of 3 numbers
 * @c: first intege
 * @size: jw
 * Return: largest number
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *)malloc((sizeof(char) * size));
	while (*p)
	{	*p = c;
		p++;
	}

	return (p);
}
