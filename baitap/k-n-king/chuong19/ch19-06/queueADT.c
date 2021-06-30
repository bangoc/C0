#include "queueADT.h"

#include <stdio.h>
#include <stdlib.h>

struct queue_type {
  int first, last, len;
  int size;
  Item elems[];
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(int size) {
  Queue q = malloc(sizeof(struct queue_type) + size * sizeof(Item));
  q->first = 0;
  q->last = -1;  //  == 0 sau lần enqueue thứ nhất
  q->len = 0;
  q->size = size;
  return q;
}

void destroy(Queue q) {
  free(q);
}

void move_next(int *idx, int size) {
  ++(*idx);
  if (*idx >= size) {
    *idx = 0;
  }
}

void enqueue(Queue q, Item i) {
  if (q->len >= q->size) {
    printf("Hàng đợi đầy: Không thể lưu thêm phần tử mới.\n");
    terminate("Chương trình kết thúc bất thường.");
  }
  move_next(&q->last, q->size);
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
  move_next(&q->first, q->size);
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
