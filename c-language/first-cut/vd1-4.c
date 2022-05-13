#include <stdio.h>

#define SECRET 1984

int main() {
  int x;
  printf("Đoán số: ");
  scanf("%d", &x);
  if (x == SECRET) {
    printf("Đúng\n");
  } else {
    printf("Sai\n");
  }
  return 0;
}
