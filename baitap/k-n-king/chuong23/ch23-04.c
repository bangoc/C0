#include <stdio.h>
#include <string.h>

int main() {
  char line[100];
  fgets(line, 100, stdin);
  char *words[100], *p;
  int n = 0;
  const char *delims = " \n";
  p = strtok(line, delims);
  if (p) {
    words[n++] = p;
    while ((p = strtok(NULL, delims)) != NULL) {
      words[n++] = p;
    }
  }
  for (int i = n - 1; i >= 0; --i) {
    printf("%s", words[i]);
    if (i > 0) {
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}