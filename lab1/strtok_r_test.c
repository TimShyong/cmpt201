#include <stdio.h>
#include <string.h>

int main() {
  char twice_members_str[] =
      "Nayeon,Jeongyeon,Momo,Sana,Jihyo,Mina,Dahyun,Chaeyong,Tzuyu";
  char *sep = ",";
  char *token;
  char *saveptr;

  token = strtok_r(twice_members_str, sep, &saveptr);
  while (token != NULL) {
    printf("  %s\n", token);
    token = strtok_r(NULL, sep, &saveptr);
  }
  return 0;
}
