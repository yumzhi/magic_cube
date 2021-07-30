/*
 * code format:
 *  clang-format -style=google -i main.c
 * get configuration file:
 *  clang-format -style=google -dump-config > .clang-format
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  int i = 0;

  printf("Hello world!\n");

  for (i = 0; i < 10; ++i) {
    /* code */
    printf("%d\n", i);
  }
  return 0;
}