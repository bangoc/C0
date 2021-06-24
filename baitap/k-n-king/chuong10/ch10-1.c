#include <stdbool.h>   /* C99 */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define ERR_OVER_FLOW 1
#define ERR_UNDER_FLOW 2

//Các biến ngoài
char contents[STACK_SIZE];
int top = 0;
int last_error = 0;

void stack_overflow() {
  last_error = ERR_OVER_FLOW;
}

void stack_underflow() {
  last_error = ERR_UNDER_FLOW;
}

void make_empty() {
  top = 0;
}

bool is_empty() {
  return top == 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

void push(char i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top] = i;
    ++top;
  }
}

char pop() {
  if (is_empty()) {
    stack_underflow();
  } else {
    --top;
    return contents[top];
  }
  return 0;
}

int main() {
  char ch, ch1;
  int result = 0;
  printf("Nhập dãy ngoặc (ngoặc tròn và ngoặc nhọn) lồng nhau: ");
  for (;;) {
    ch = getchar();
    if (ch == '\n') {
      if (!is_empty()) {
        result = 1;  // Trường hợp 1: Ngăn xếp khác rỗng khi kết thúc
      }
      break;
    } else if (ch == '(' || ch == '{') {
      push(ch);
    } else if (ch == ')' || ch == '}') {
      ch1 = pop();
    } else {
      // Bỏ qua các ký tự khác
      continue;
    }
    // Kiểm tra lỗi ngăn xếp
    if (last_error == ERR_OVER_FLOW) {
      result = 2;  // Trường hợp 2: Ngăn xếp tràn trên
      break;
    } else if (last_error == ERR_UNDER_FLOW) {
      result = 3;  // Trường hợp 3: Ngăn xếp tràn dưới
      break;
    }
    // Kiểm tra cặp ngoặc đóng & mở
    if (ch == ')' && ch1 != '(') {
      result = 4;  // Trường hợp 4: Lỗi đặt ngoặc ()
      break;
    } else if (ch == '}' && ch1 != '{') {
      result  = 5;  // Trường hợp 5: Lỗi đặt ngoặc {}
      break;
    }
  }
  switch (result) {
    case 0:
      printf("Dãy ngoặc được đạt đúng.\n");
      break;
    case 1:
      printf("Thừa ngoặc mở. Dãy ngoặc được đặt sai.\n");
      break;
    case 2:
      printf("Ngăn xếp tràn trên - dữ liệu vào vượt giới hạn. Chưa có kết quả kiểm tra cuối cùng.\n");
      break;
    case 3:
      printf("Ngăn xếp tràn dưới - thừa ngoặc đóng. Dãy ngoặc được đạt sai.\n");
      break;
    case 4:
      printf("Cặp () không khớp. Dãy ngoặc được đặt sai.\n");
      break;
    case 5:
      printf("Cặp {} không khớp. Dãy ngoặc được đặt sai.\n");
      break;
  }
  return 0;
}