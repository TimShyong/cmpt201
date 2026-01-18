#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *line = NULL;
  size_t len = 0;
  ssize_t read;

  printf("Please enter a line of text: ");
  read = getline(&line, &len, stdin);

  if (read == -1) {
    printf("Unexpected error while reading user input");
    perror("getline failed here");
  }

  printf("line = %s", line);
  printf("number of characters from getline() = %zd\n",
         read); // number of characters + newline character
  printf("buffer size = %zu\n", len);
  free(line);
  return 0;
}
