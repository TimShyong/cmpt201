#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *buff = NULL;
  size_t size = 0;
  ssize_t num_char;

  while (1) {
    printf("Please enter a line of text: ");
    num_char = getline(&buff, &size, stdin);

    if (num_char == -1) {
      perror("getline failed");
      exit(EXIT_FAILURE);
    }
    printf("User entered: %s", buff);
  }

  return 0;
}
