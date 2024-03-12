/*
 * File: 1-binary.c
 * Auth: Yasser Tawfek
 */

#include "search_algos.h"

/**
  * binary_search - Searchea
  * @array: Apointrch.
  * @size: Therray.
  * @value: Thessor.
  *
  * Return: Is
  *
  * Description: Printschange.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t ss, aa, dd;

	if (array == NULL)
		return (-1);

	for (aa = 0, dd = size - 1; dd >= aa;)
	{
		printf("Searching in array: ");
		for (ss = aa; ss < dd; ss++)
			printf("%d, ", array[ss]);
		printf("%d\n", array[ss]);

		ss = aa + (dd - aa) / 2;
		if (array[ss] == value)
			return (ss);
		if (array[ss] > value)
			dd = ss - 1;
		else
			aa = ss + 1;
	}

	return (-1);
}
