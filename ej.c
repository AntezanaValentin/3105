#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  char *morse[] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
    " "
  };
  int c = 1;
  while (c < argc) {
    int i = 0;
    while (argv[1][i] != 0) {
      printf("%s ", morse[argv[1][i] - 'a']);
      i++;
    }
  printf("            ");
  c++;
  }
  printf("\n");
  return 0;
}
