#include "queueADT.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct queue_type {
  int first, last, len;
  Item elems[MAX_SIZE];
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(void) {
  Queue q = malloc(sizeof(struct queue_type));
  q->first = 0;
  q->last = -1;  //  == 0 sau lần enqueue thứ nhất
  q->len = 0;
  return q;
}

void destroy(Queue q) {
  free(q);
}

void move_next(int *idx) {
  ++(*idx);
  if (*idx >= MAX_SIZE) {
    *idx = 0;
  }
}

void enqueue(Queue q, Item i) {
  if (q->len >= MAX_SIZE) {
    printf("Hàng đợi đầy: Không thể lưu thêm phần tử mới.\n");
    terminate("Chương trình kết thúc bất thường.");
  }
  move_next(&q->last);
  q->elems[q->last] = i;
  ++(q->len);
}

Item dequeue(Queue q) {
  Item i;
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  i = q->elems[q->first];
  move_next(&q->first);
  --(q->len);
  return i;
}
Item first(Queue q) {
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  return q->elems[q->first];
}

Item last(Queue q) {
  if (is_empty(q)) {
    printf("Hàng đợi rỗng: Không thể lấy phần tử.\n");
    terminate("Chương trình kết thúc bất thường.\n");
  }
  return q->elems[q->last];
}

bool is_empty(Queue q) {
  return q->len == 0;
}

void make_empty(Queue q) {
  q->first = 0;
  q->last = -1;
  q->len = 0;
}
