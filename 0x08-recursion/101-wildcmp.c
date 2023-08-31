#include "main.h"

/**
 * wildcmp - returns the largest of 3 numbers
 * @s1: first intege
 * @s2: d
 * Return: largest number
 */

int wild(char *s1, char *s2, int i, int j) {

  // Base cases
  if (s2[j] == '\0')
    return s1[i] == '\0';
  
  if (i < 0 || j < 0)  
    return 0;

  // Handle '*' wildcard
  if (s2[j] == '*') {
    if (s1[i] == s2[j-1] && wild(s1, s2, i+1, j))
      return 1;
    
    if (s1[i+1] == s2[j+1] && wild(s1, s2, i, j+1))
      return 1; 
  }

  // Match current chars  
  if (s1[i] != s2[j])
    return 0;

  // Recurse on remainder
  return wild(s1, s2, i+1, j+1); 
}


int wildcmp(char *s1, char *s2) {
  return wild(s1, s2, 0, 0); 
}
