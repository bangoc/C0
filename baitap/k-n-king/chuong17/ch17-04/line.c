#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct word_node {
  char *str;
  struct word_node *next;
};

struct word_node *line = NULL, *last = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
  struct word_node *p = line, *tmp;
  while (p) {
    tmp = p;
    p = p->next;
    free(tmp->str);
    free(tmp);
  }
  line = NULL;
  last = NULL;
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  struct word_node *nd = malloc(sizeof(struct word_node));
  if (nd == NULL) {
    printf("Không thể cấp phát bộ nhớ cho từ mới.\n");
    return;
  }
  nd->str = strdup(word);
  nd->next = NULL;
  if (line != NULL) {
    // Dấu cách
    line_len++;
    last->next = nd;
    last = nd;
  } else {
    line = last = nd;
  }
  line_len += strlen(word);
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, i, j;

  extra_spaces = MAX_LINE_LEN - line_len;
  for (struct word_node *p = line; p != NULL; p = p->next) {
    printf("%s", p->str);
    if (p != last) {
      spaces_to_insert = extra_spaces / (num_words - 1);
      for (j = 1; j <= spaces_to_insert + 1; j++) {
        putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
    }
    num_words--;
  }
  putchar('\n');
}

void flush_line(void)
{
  for (struct word_node *p = line; p != NULL; p = p->next) {
    printf("%s", p->str);
    if (p != last) {
      printf(" ");
    }
  }
}
