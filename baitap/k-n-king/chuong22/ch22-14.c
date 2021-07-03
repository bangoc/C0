#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char inp_name[100];
  int len = 0;
  printf("Nhập tên tệp chứa thông tin cần được mã hóa: ");
  fgets(inp_name, 100, stdin);
  inp_name[strlen(inp_name) - 1] = '\0';
  printf("Nhập khoảng dịch chuyển (1-25): ");
  int d;
  scanf("%d", &d);
  char out_name[100];
  strcpy(out_name, inp_name);
  strcat(out_name, ".enc");
  FILE *inp = fopen(inp_name, "rb");
  FILE *out = fopen(out_name, "wb");
  if (inp == NULL || out == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }
  int ch;
  while ((ch = fgetc(inp)) != EOF) {
    if (islower(ch)) {
      ch = 'a' + ((ch - 'a') + d) % ('z' - 'a' + 1);
    } else if (isupper(ch)) {
      ch = 'A' + ((ch - 'A') + d) % ('Z' - 'A' + 1);
    }
    fputc(ch, out);
  }
  fclose(inp);
  fclose(out);
  return 0;
}