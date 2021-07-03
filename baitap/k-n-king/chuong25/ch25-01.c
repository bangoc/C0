#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(char *s) {
  char *tmp = malloc(strlen(s) + 1);
  strcpy(tmp, s);
  return tmp;
}

int main() {
  char *C_locale, *tmp = setlocale(LC_ALL, NULL);
  if (!tmp) {
    printf("Không thể lấy thông tin về địa điểm C.\n");
    return 1;
  }
  C_locale = my_strdup(tmp);
  printf("Thông tin về địa điểm C: %s\n", C_locale);

  // Thiết lập địa điểm bản địa
  setlocale(LC_ALL, "");
  tmp = setlocale(LC_ALL, NULL);
  if (!tmp) {
    printf("Không thể lấy thông tin về địa điểm bản địa.\n");
    return 1;
  }
  char *native_locale = my_strdup(tmp);
  printf("Thông tin về địa điểm bản địa: %s\n", native_locale);
  if (strcmp(native_locale, C_locale) == 0) {
    printf("Địa điểm bản địa là địa điểm C.\n");
  } else {
    printf("Địa điểm bản địa khác địa điểm C.\n");
  }
  return 0;
}