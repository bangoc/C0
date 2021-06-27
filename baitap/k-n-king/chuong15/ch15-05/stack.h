#ifndef STACK_H_
#define STACK_H_

#include <stdbool.h>  // c99

#define STACK_SIZE 100
#define ERR_OVER_FLOW 1
#define ERR_UNDER_FLOW 2

extern int last_error;

void make_empty();
bool is_empty();
bool is_full();
void push(int i);
int pop();

#endif  // STACK_H_