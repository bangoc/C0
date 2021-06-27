#include "stack.h"

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