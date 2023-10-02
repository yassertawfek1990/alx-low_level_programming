#include "main.h"


/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int main(int argc, char *argv[])
{
	int f;
	int t;
	int b;
	int c;
	char *s;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s = malloc(sizeof(char) * 1024);
	if (s == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	f = open(argv[1], O_RDONLY);
	b = read(f, s, 1024);
	t = open(argve[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)
	do {
		if (f == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(s);
			exit(98);
		}

		c = write(t, s, b);
		if (t == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}

		b = read(f, s, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);
	free(s);
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	if (close(t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t);
		exit(100);
	}
	return (c);

}
