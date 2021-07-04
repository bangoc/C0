#include <locale.h>
#include <stdio.h>
#include <time.h>

int main() {
  setlocale(LC_ALL, "vi_VN");
  char out[100];
  time_t now = time(NULL);
  struct tm *p = localtime(&now);

  // a
  char am_pm;
  if (p->tm_hour >= 12) {
    am_pm = 'p';
  } else {
    am_pm = 'a';
  }
  strftime(out, 100, "%A, %e %B, %Y %I:%M", p);
  printf("%s%c\n", out, am_pm);

  // b
  strftime(out, 100, "%a, %e %B %R", localtime(&now));
  printf("%s\n", out);

  // c
  strftime(out, 100, "%d/%m/%y %I:%M:%S %p", localtime(&now));
  printf("%s\n", out);
  return 0;
}