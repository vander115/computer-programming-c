#include <stdio.h>

int main() {

  int i = 32;

  while (i <= 255) {
    printf("%3d) %c\n", i, i);
    i++;
  }

  return 0;
}