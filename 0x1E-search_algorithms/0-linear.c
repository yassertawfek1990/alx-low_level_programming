/*
 * File: 0-linear.c
 * Auth: Yasser Tawfek
 */

#include "search_algos.h"

/**
  * linear_search - Ss
  * @array: As
  * @size: Ts
  * @value: Ts
  *
  * Return: I
  *
  * Description: s
  */
int linear_search(int *array, size_t size, int value)
{
	size_t dd;

	if (array == NULL)
		return (-1);

	for (dd = 0; dd < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", dd, array[dd]);
		if (array[dd] == value)
			return (dd);
	}

	return (-1);
}
