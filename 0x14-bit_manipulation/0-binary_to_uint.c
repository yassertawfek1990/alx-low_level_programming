#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: The binary string to convert
 *
 * Return: The converted number or 0 on error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		if (*b++ == '1')
			num |= 1;
	}
	return (num);
}
