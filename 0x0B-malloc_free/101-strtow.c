#include "main.h"

char** strtow(char* str) {

	int num_words, word_idx;
	char ** words;
	char* word

  if (str == NULL || *str == '\0') {
    return NULL;
  }

  num_words = 0;
  int i;
  for (i = 0; str[i]; i++) {
    if (str[i] == ' ' && str[i+1] != '\0') {
      num_words++;
      while (str[i] == ' ') {
        i++; 
      }
    }
  }

  num_words++;

  words = malloc(sizeof(char*) * (num_words + 1));
  if (!words) {
    return NULL;
  }

  i = 0;
  word_idx = 0;
  word = strtok(str, " ");
  while (word != NULL) {
    words[word_idx] = strdup(word);
    if (!words[word_idx]) {
      return NULL; 
    }
    word = strtok(NULL, " ");
    word_idx++;
  }

  words[word_idx] = NULL;
  return words;
}
