#include "function_pointers.h"

/**
 * array_iterator - returns the largest of 3 numbers
 * @array: first intege
 * @size: c
 * @action: ds
 * Return: largest number
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
