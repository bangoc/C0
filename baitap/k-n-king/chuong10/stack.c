#include <stdbool.h>   /* C99 */

#define STACK_SIZE 100

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
}