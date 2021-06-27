#include <ctype.h>
#include <stdbool.h>   /* C99 */
#include <stdio.h>

#include "stack.h"

int main() {
  char ch;
  bool stop = false;
  for (;;) {
    int s = 0, v, v1, v2;
    make_empty();
    last_error = 0;
    printf("Nhập một biểu thức hậu tố (RPN): ");
    for (;;) {
      scanf(" %c", &ch);
      if (isdigit(ch)) {
        push(ch - '0');
        if (last_error != 0) {
          break;
        }
      } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        v2 = pop();
        if (last_error != 0) {
          break;
        }
        v1 = pop();
        if (last_error != 0) {
          break;
        }
        if (ch == '+') {
          v = v1 + v2;
        } else if (ch == '-') {
          v = v1 - v2;
        } else if (ch == '*') {
          v = v1 * v2;
        } else if (ch == '/') {
          v = v1 / v2;
        }
        push(v);
        if (last_error != 0) {
          break;
        }
      } else if (ch == '=') {
        s = pop();
        break;
      } else {
        stop = true;
        break;
      }
    }
    if (stop) {
      break;
    }
    // Xử lý các lỗi ngăn xếp
    if (last_error == ERR_OVER_FLOW) {
      printf("Ngăn xếp tràn trên. Không tính được giá trị biểu thức. \n");
    } else if (last_error == ERR_UNDER_FLOW) {
      printf("Ngăn xếp tràn dưới (thiếu toán hạng cho toán tử).\n");
    } else {
      printf("Giá trị biểu thức là: %d\n", s);
    }
  }
  return 0;
}