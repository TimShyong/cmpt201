#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *buff = NULL;
  size_t size = 0;
  ssize_t num_char;

  printf("Please enter a line of text: ");
  num_char = getline(&buff, &size, stdin);

  if (num_char == -1) {
    // add error handling here
  }

  printf("User entered: %s", buff);
  printf("number of characters from getline() = %zd\n", num_char);
  // use buff
  free(buff);

  return 0;
}
