#include <stdio.h>
#include "stackADT.h"

int main(void)
{
  Stack s1, s2;
  char *n;

  s1 = create();
  s2 = create();

  push(s1, "1 (một)");
  push(s1, "2 (hai)");

  n = pop(s1);
  printf("Đã lấy %s từ s1\n", n);
  push(s2, n);
  n = pop(s1);
  printf("Đã lấy %s từ s1\n", n);
  push(s2, n);

  destroy(s1);

  while (!is_empty(s2))
    printf("Đã lấy %s từ s2\n", (char *)pop(s2));

  push(s2, "3 (ba)");
  make_empty(s2);
  if (is_empty(s2))
    printf("s2 rỗng\n");
  else
    printf("s2 không rỗng\n");

  destroy(s2);

  return 0;
}
