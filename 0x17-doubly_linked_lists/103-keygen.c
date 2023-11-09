#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Generatexecutable.
 * @argc: Tmber of.
 * @argv: Anrray
 * Return: A.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *k;
	char pa[7];
	int l;
	int j;
	int t;

	l = strlen(argv[1]);
	k = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	t = (l ^ 59) & 63;
	pa[0] = k[t];
	t = 0;
	for (j = 0; j < l; j++)
		t += argv[1][j];
	pa[1] = k[(t ^ 79) & 63];
	t = 1;
	for (j = 0; j < l; j++)
		t *= argv[1][j];
	pa[2] = k[(t ^ 85) & 63];
	t = 0;
	for (j = 0; j < l; j++)
	{
		if (argv[1][j] > t)
			t = argv[1][j];
	}
	srand(t ^ 14);
	pa[3] = k[rand() & 63];
	t = 0;
	for (j = 0; j < l; j++)
		t += (argv[1][j] * argv[1][j]);
	pa[4] = k[(t ^ 239) & 63];
	for (j = 0; j < argv[1][0]; j++)
		t = rand();
	pa[5] = k[(t ^ 229) & 63];
	pa[6] = '\0';
	printf("%s", pa);
	return (0);
}
