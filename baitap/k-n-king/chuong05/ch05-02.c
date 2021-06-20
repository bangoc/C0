#include <stdio.h>

int main() {
  int h, m;
  printf("Nhập thời gian theo 24 giờ: ");
  scanf("%d:%d", &h, &m);
  if (h < 12) {
    if (h == 0) {
      h = 12;
    }
    printf("%d:%02d a.m.\n", h, m);
  } else if (h <= 24) {
    h -= 12;
    printf("%d:%02d p.m.\n", h, m);
  }
  return 0;
}