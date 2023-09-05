char** strtow(char* str) {

  if (str == NULL || *str == '\0') {
    return NULL;
  }

  int num_words = 0;
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

  char** words = malloc(sizeof(char*) * (num_words + 1));
  if (!words) {
    return NULL;
  }

  i = 0;
  int word_idx = 0;
  char* word = strtok(str, " ");
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
