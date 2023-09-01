#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter program
 * @argc: f
 * @argv: d
 * Description: C program prints using printf command
 * Return: always return 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int x;
	int l;
	int m;
	int c[] = {25, 10, 5, 2, 1};

	l = 0;
	m = atoi(argv[1]);

	for (x = 0; x < 5; x++)
	{
		if (m >= c[x])
		{
			l = l + (m / c[x]);
			m = m % c[x];
			if (m % c[x] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
