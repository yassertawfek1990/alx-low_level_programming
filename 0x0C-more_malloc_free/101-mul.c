#include "main.h"

int main(int argc, char **argv)
{
        char *k; 
        int e, q, w;

        if (argc !=3)
                printf("Error\n"), exit(98);
        e = strlen(argv[1]) + strlen(argv[2]);
        k = mb(argv[1], argv[2]);
        q = 0;
        w = 0;
        while (w < e)
        {
                if (k[w])
                        q = 1;
                if (q)
                        _putchar(k[w] + 48);
                w = w + 1;
        }
        if (!q)
                _putchar(48);
        _putchar('\n');
        free(k);
        return (0);
}
int id(int u)
{
        return (u >= 48 && u <= 57);
}
char *mb(char *v1, char *v2)
{
        char *b;
        int d, f, g, h, j1, j2;
        
        j1 = strlen(v1);
        j2 = strlen(v2);
        b = malloc(d = h = j1 + j2);
        if (!b)
                printf("Error\n"), exit(98);
        while (d--)
                b[d] = 0;
        for (j1--; j1 >= 0; j1--)
        {
                if (!id(v1[j1]))
                {
                        free(b);
                        printf("Error\n"), exit(98);
                }
                d = v1[j1] - 48;
                h = 0;
                for (j2 = strlen(v2) - 1; j2 >= 0; j2--)
                {
                        if (!id(v2[j2]))
                        {
                                free(b);
                                printf("Error\n"), exit(98);
                        }
                        f = v2[j2] - 48;
                        g = g + b[j1 + j2 + 1] + (d * f);
                        b[j1 + j2 + 1] = g % 10;
                        g /= 10;
                }
                if (g)
                        b[j1 + j2 + 1] += g;
        }
        return (b);
}

