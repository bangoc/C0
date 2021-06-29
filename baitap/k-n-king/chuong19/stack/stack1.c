#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(int i)
{
  if (is_full())
    terminate("Lỗi trong hàm push: ngăn xếp đầy.");
  contents[top++] = i;
}

int pop(void)
{
  if (is_empty())
    terminate("Lỗi trong hàm pop: ngăn xếp rỗng.");
  return contents[--top];
}
