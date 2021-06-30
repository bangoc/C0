#ifndef QUEUEADT_H_
#define QUEUEADT_H_

#include <stdbool.h>  // C99

typedef int Item;
typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);
Item first(Queue q);
Item last(Queue q);
bool is_empty(Queue q);
void make_empty(Queue q);
#endif  // QUEUEADT_H_