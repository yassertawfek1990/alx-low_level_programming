#include "main.h"

/**
 * argstostr - returns the largest of 3 numbers
 * @ac: first intege
 * @av: d
 * Return: largest number
 */

char *argstostr(int ac, char **av)
{
	int i, m, size;
	char *str;
	char *ptr;

	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
		size += strlen(av[m]) + 1;
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr, av[i]);
		ptr += strlen(av[i]);
		ptr++ = '\n';
	}
	*ptr = '\0';
	return (str);
}
