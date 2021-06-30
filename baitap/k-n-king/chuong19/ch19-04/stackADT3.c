#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node {
  void *data;
  struct node *next;
};

struct stack_type {
  struct node *top;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s = malloc(sizeof(struct stack_type));
  if (s == NULL)
    terminate("Lỗi trong hàm tạo: Không thể tạo ngăn xếp.");
  s->top = NULL;
  return s;
}

void destroy(Stack s)
{
  make_empty(s);
  free(s);
}

void make_empty(Stack s)
{
  while (!is_empty(s)) {
    void *i = pop(s);
    // free(i);
  }
}

bool is_empty(Stack s)
{
  return s->top == NULL;
}

bool is_full(Stack s)
{
  return false;
}

void push(Stack s, void *i)
{
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    terminate("Lỗi trong hàm push: Ngăn xếp đầy.");

  new_node->data = i;
  new_node->next = s->top;
  s->top = new_node;
}

void *pop(Stack s)
{
  struct node *old_top;
  void *i;

  if (is_empty(s))
    terminate("Lõi trong hàm pop: Ngăn xếp rỗng.");

  old_top = s->top;
  i = old_top->data;
  s->top = old_top->next;
  free(old_top);
  return i;
}
