#include "main.h"

/**
 * read_textfile - Reads a text 
 * @filename: A pointer to t
 * @letters: The number of l
 * Return: If the function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	file *f;
	char s[letters];

	if (!filename)
		return (0);
	f = fopen(filename, r);
	if (!f)
		return (0);
	else
	{
		if (fgets(filename, letters, f) != NULL)
			return (strlen(f));
		else
			return (0);
	}



}
