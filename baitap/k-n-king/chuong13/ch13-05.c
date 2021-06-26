#include <stdio.h>
int main(int argc, char *argv[]) {
  int sum = 0, value;
  for (int i = 1; i < argc; ++i) {
    sscanf(argv[i], "%d", &value);
    sum += value;
  }
  printf("Tổng là: %d\n", sum);
  return 0;
}