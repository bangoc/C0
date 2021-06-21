#include <stdio.h>
#include <ctype.h>

int main() {
  int h, m;
  char sig;
  printf("Nhập thời gian 12-giờ: ");
  scanf("%d:%d %c", &h, &m, &sig);
  sig = toupper(sig);
  if (h == 12) {
    h = sig == 'P'? 12: 0;
  } else if (sig == 'P') {
    h += 12;
  }
  printf("Thời gian tương đương ở dạng 24 giờ: %02d:%02d\n", h, m);
  return 0;
}