#include "main.h"

/**
 * length - Enter program
 *
 * @x: number
 *
 * Return: length
*/

int length(int x)
{
	int len = 0;

	if (!x)
		return (1);
	while(x)
	{
		x = x/10;
		len += 1;
	}

	return (len)	
}


/**
 * main - Enter program
 *
 * Description: C program prints using putchar
 *
 * Return: always return
*/

int main(void)
{
        int c;
	int i;
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long max = 100000000;
	unsigned long n01 = 0;
	unsigned long n02 = 0;
	unsigned long t;
	unsigned long t0 = 0;

	for (c = 1; c <= 98; c++)
	{
		if (n01 > 0)
			pritf("%lu", n01);
			i = len(max) - 1 - len(n1)l
}
