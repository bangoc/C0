#include <stdio.h>

int main() {
  float x, s = 0;
  char c1 = ' ', c2;
  for (;;) {
    scanf("%f%c", &x, &c2);
    switch (c1) {
      case '+': s += x;
        break;
      case '-': s -= x;
        break;
      case '*': s *= x;
        break;
      case '/': s /= x;
        break;
      case ' ': s = x;
        break;
    }
    if (c2 == '\n') {
      break;
    }
    c1 = c2;
  }
  printf("Giá trị biểu thức: %f\n", s);
  return 0;
}