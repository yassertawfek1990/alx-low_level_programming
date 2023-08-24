#include "main.h"

/**
 * cap_string - returns the largest of 3 numbers
 * @str: first integer
 * Return: largest number
 */

char *cap_string(char *str) 
{
  int i;
  int len = strlen(str);
  
  for (i = 0; i < len; i++) {
    if (i == 0 || str[i-1] == ' ' ||
        str[i-1] == '\t' || str[i-1] == '\n' ||
        str[i-1] == ',' || str[i-1] == ';' ||
        str[i-1] == '.' || str[i-1] == '!' ||
        str[i-1] == '?' || str[i-1] == '"' ||
        str[i-1] == '(' || str[i-1] == ')' ||
        str[i-1] == '{' || str[i-1] == '}') {
      str[i] = toupper(str[i]);
    } else {
      str[i] = tolower(str[i]); 
    }
  }

  return str;
}
