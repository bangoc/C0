#include <ctype.h>
#include <stdbool.h>   /* C99 */
#include <stdio.h>

#define STACK_SIZE 100
#define ERR_OVER_FLOW 1
#define ERR_UNDER_FLOW 2

int last_error = 0;

void stack_overflow() {
  last_error = ERR_OVER_FLOW;
}

void stack_underflow() {
  last_error = ERR_UNDER_FLOW;
}

//Các biến ngoài
int contents[STACK_SIZE];
int top = 0;

void make_empty() {
  top = 0;
}

bool is_empty() {
  return top == 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top] = i;
    ++top;
  }
}

int pop() {
  if (is_empty()) {
    stack_underflow();
  } else {
    --top;
    return contents[top];
  }
  return 0;
}

int main() {
  char ch;
  for (;;) {
    int s = 0, v, v1, v2;
    make_empty();
    last_error = 0;
    printf("Nhập một biểu thức hậu tố (RPN): ");
    int ret = 0;
    for (;;) {
      scanf(" %c", &ch);
      if (isdigit(ch)) {
        push(ch - '0');
      } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        v2 = pop();
        v1 = pop();
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
      } else if (ch == '=') {
        s = pop();
      } else {
        // Kết thúc chương trình
        return 0;
      }
      // Xử lý các lỗi ngăn xếp
      if (last_error == ERR_OVER_FLOW) {
        printf("Ngăn xếp tràn trên. Không tính được giá trị biểu thức. \n");
      } else if (last_error == ERR_UNDER_FLOW) {
        printf("Ngăn xếp tràn dưới (thiếu toán hạng cho toán tử).\n");
      }

      // Điều kiện dừng tính biểu thức
      if (last_error || ch == '=') {
        break;
      }
    }
    if (!last_error) {
      printf("Giá trị biểu thức là: %d\n", s);
    }
  }
  return 0;
}