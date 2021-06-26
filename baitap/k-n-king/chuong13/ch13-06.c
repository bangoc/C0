/* Kiểm tra các tên hành tinh */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int my_strcmp(const char *s1, const char *s2) {
  while (toupper(*s1) == toupper(*s2)) {
    if (*s1 == '\0') {
      return 0;
    }
    ++s1;
    ++s2;
  }
  return toupper(*s1) - toupper(*s2);
}

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter",
            "Saturn", "Uranus", "Neptune", "Pluto"};
  int i, j;
  for (i = 1; i < argc; ++i) {
    for (j = 0; j < NUM_PLANETS; ++j) {
      if (my_strcmp(argv[i], planets[j]) == 0) {
        printf("%s là hành tinh %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS) {
      printf("%s không phải là một hành tinh\n", argv[i]);
    }
  }
  return 0;
}