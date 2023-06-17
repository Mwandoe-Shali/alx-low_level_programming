#include <stdio.h>

int main(void) {
  for (char c = 'a'; c <= 'z'; c++) {
    putchar(c);
  }

  putchar('\n');

  for (char c = 'A'; c <= 'Z'; c++) {
    putchar(c);
  }

  putchar('\n');

  return 0;
}

