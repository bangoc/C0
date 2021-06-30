#include <ctype.h>
#include <stdbool.h>   /* C99 */
#include <stdio.h>

#include "stackADT.h"

int main() {
  char ch;
  bool stop = false;
  Stack stack = create();
  for (;;) {
    int result = 0, v, v1, v2;
    make_empty(stack);
    printf("Nhập một biểu thức hậu tố (RPN): ");
    for (;;) {
      scanf(" %c", &ch);
      if (isdigit(ch)) {
        push(stack, ch - '0');
      } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        v2 = pop(stack);
        v1 = pop(stack);
        if (ch == '+') {
          v = v1 + v2;
        } else if (ch == '-') {
          v = v1 - v2;
        } else if (ch == '*') {
          v = v1 * v2;
        } else if (ch == '/') {
          v = v1 / v2;
        }
        push(stack, v);
      } else if (ch == '=') {
        result = pop(stack);
        break;
      } else {
        stop = true;
        break;
      }
    }
    if (stop) {
      break;
    }
    printf("Giá trị biểu thức là: %d\n", result);
  }
  destroy(stack);
  return 0;
}