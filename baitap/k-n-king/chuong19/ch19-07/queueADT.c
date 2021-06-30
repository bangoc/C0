#include "queueADT.h"

#include <stdio.h>
#include <stdlib.h>

struct queue_node {
  Item data;
  struct queue_node *next;
};

struct queue_type {
  int len;
  struct queue_node *first, *last;
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create() {
  Queue q = malloc(sizeof(struct queue_type));
  q->first = NULL;
  q->last = NULL;
  q->len = 0;
  return q;
}

void destroy(Queue q) {
  make_empty(q);
  free(q);
}

void enqueue(Queue q, Item i) {
  struct queue_node *nd = malloc(sizeof(struct queue_node));
  if (!nd) {
    printf("Hết bộ nhớ: Không thể lưu thêm phần tử mới.\n");
    terminate("Chương trình kết thúc bất thường.");
  }
  nd->data = i;
  nd->next = NULL;
  if (is_empty(q)) {
    q->first = q->last = nd;
  } else {
    q->last->next = nd;
    q->last = nd;
  }
  ++(q->len);
}

Item dequeue(Queue q) {
  Item i;
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  i = q->first->data;
  struct queue_node *tmp = q->first;
  q->first = q->first->next;
  free(tmp);
  if (q->first == NULL) {
    q->last = NULL;
  }
  --(q->len);
  return i;
}
Item first(Queue q) {
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  return q->first->data;
}

Item last(Queue q) {
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  return q->last->data;
}

bool is_empty(Queue q) {
  return q->first == NULL && q->last == NULL;
}

void make_empty(Queue q) {
  while (!is_empty(q)) {
    dequeue(q);
  }
}
