#include "main.h"
#define BUFSIZE 1024

/**
 * main - Enter program
 * @argc: The number ofsupplied to te program.
 * @argv: An array of pointers to s.
 * Description: C program prints using printf ommand
 *
 * Return: always return 0
*/

int main(int argc, char *argv[])
{
  int from, to, r, w;
  char buf[BUFSIZE];

  if (argc != 3)
  {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
  }

  from = open(argv[1], O_RDONLY);
  if (from == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if (to == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
    exit(99);    
  }

  while ((r = read(from, buf, BUFSIZE)) > 0)
  {
    if (write(to, buf, r) != r)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
      exit(99);
    }
  }

  if (r == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  if (close(from) == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from); 
    exit(100);
  }

  if (close(to) == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
    exit(100);
  }  

  return 0;
}
