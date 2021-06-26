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

int evaluate_RPN_expression(const char *expression) {
  int s = 0, v, v1, v2;
  for (; *expression != '\0'; ++expression) {
    char ch = *expression;
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
    }
  }
  return s;
}

int main() {
  char ch;
  bool stop = false;
  char expression[200];
  int len = 0;
  for (;;) {
    int s = 0;
    make_empty();
    last_error = 0;
    printf("Nhập một biểu thức hậu tố (RPN): ");
    for (;;) {
      scanf(" %c", &ch);
      expression[len] = ch;
      ++len;
      if (ch == '=') {
        expression[len] = '\0';
        s = evaluate_RPN_expression(expression);
        len = 0;
        break;
      } else if (!isdigit(ch) && ch != '+' && ch != '-' && ch != '*' && ch != '/') {
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