#include "main.h"

/**
 * argstostr - returns the largest of 3 numbers
 * @ac: first intege
 * @av: d
 * Return: largest number
 */

char *argstostr(int ac, char **av)
{
	int i, size;
	char *str;
	char *ptr;

	t = 0;

	if (ac == 0 || av == NULL)
		return NULL;
	for (int i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;
	str = malloc(size + 1);
	if (str == NULL)
		return NULL;
	ptr = str;
	for (int i = 0; i < ac; i++)
	{
		strcpy(ptr, av[i]);
		ptr += strlen(av[i]);
		*ptr++ = '\n';
	}
	*ptr = '\0';
	return str;
}
