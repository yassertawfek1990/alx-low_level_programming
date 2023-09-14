#include "variadic_functions.h"

/**
 * print_all - returns the largest of 3 numbers
 * @format: df
 * Return: largest number
 */

void print_all(const char * const format, ...)
void print_all(const char * const format, ...) 
{
  va_list args;
  va_start(args, format);
  
  int i = 0;
  char *s;
  
  while (format[i] != '\0') {
    switch(format[i]) {
      case 'c':
        printf("%c", va_arg(args, int));
        break;
      case 'i':
        printf("%d", va_arg(args, int));
        break;
      case 'f':
        printf("%f", va_arg(args, double));
        break;
      case 's':
        s = va_arg(args, char*);
        if (s == NULL) {
          printf("(nil)");
        } else {
          printf("%s", s); 
        }
        break;
    }
    
    if (format[i + 1] != '\0') {
      printf(", ");
    }
    
    i++;
  }
  
  printf("\n");
  
  va_end(args);
}
