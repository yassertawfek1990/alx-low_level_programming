#include "main.h"

/**
 * print_alphabet_x10 - print alphabets using asci code
 * print lowercase alphabet a-z
*/

void print_alphabet_x10(void)
{
        int num;
	for (num = 1; num <= 10; num++)
	{
		int alph;

		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);

        	_putchar('\n');
	}
}
