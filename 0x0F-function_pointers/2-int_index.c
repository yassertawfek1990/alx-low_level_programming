#include "function_pointers.h"

/**
 * int_index - returns the largest of 3 numbers
 * @array: first intege
 * @size: c
 * @cmp: ds
 * Return: largest number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
