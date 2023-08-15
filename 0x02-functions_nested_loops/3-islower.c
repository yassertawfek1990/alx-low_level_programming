#include "main.h"

/**
 * _islower - print alphabets if lowercase using asci code
 * print lowercase alphapet a-z
 *
 * @c: character
 *
 * Return: 1 if lowercase 0 if uppercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);

}
