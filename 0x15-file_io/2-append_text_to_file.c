#include "main.h"


/**
 * append_text_to_file - Reads a text
 * @filename: A pointer to t
 * @text_content: The number of l
 * Return: If the function fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int c;
	int l;

	l = 0;
	if (text_content != NULL)
		l = strlen(text_content);
	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	c = write(a, text_content, l);
	if (a == -1 || c == -1)
		return (-1);
	close(a);
	return (1);

}
