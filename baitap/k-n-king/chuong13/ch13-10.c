#include <stdio.h>

void reverse_name(char *name) {
  char firstname[100], lastname[100];
  sscanf(name, "%s%s", firstname, lastname);
  sprintf(name, "%s, %c.", lastname, firstname[0]);
}

int main() {
  printf("Nhập tên và họ: ");
  char line[100];
  fgets(line, 100, stdin);
  reverse_name(line);
  printf("%s\n", line);
  return 0;
}