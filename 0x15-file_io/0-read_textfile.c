#include "main.h"


/**
 * read_textfile - Reads a text
 * @filename: A pointer to t
 * @letters: The number of l
 * Return: If the function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b;
	ssize_t c;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	b = read(a, s, letters);
	c = write(STDOUT_FILENO, s, b);
	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(s);
		return (0);
	}
	free(s);
	close(a);
	return (c);

}
