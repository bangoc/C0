/*
  (C) Nguyen Ba Ngoc 2022
  Cách thực hiện thí nghiệm:
    Biên dịch chương trình, sau đó lần lượt điều hướng inp1.txt và inp2.txt
    vào stdin khi chạy chương trình.
*/

#include <stdio.h>
#include <string.h>

void str_detail(char *s){
  printf("len = %ld\n", strlen(s));
  for (int i = 0; i < strlen(s); ++i) {
    printf(" %d", s[i]);
  }
  printf("\n");
}

int main() {
  char s[100];
  printf("====gets====\n");
  gets(s);
  str_detail(s);

  printf("====scanf===\n");
  scanf("%[^\n]%*c", s);
  str_detail(s);

  printf("====fgets===\n");
  fgets(s, sizeof(s), stdin);
  str_detail(s);
  return 0;
}