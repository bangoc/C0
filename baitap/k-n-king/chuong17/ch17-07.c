/* In danh sách các nhắc lịch trong một tháng (Phiên bản sử dụng chuỗi cấp phát động) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vstring.h"

#define MAX_REMIND 50   /* Số lượng nhắc lịch tối đa */
#define MSG_LEN 60      /* Độ dài tối đa của một thông điệp nhắc nhở */

int read_line(char str[], int n);

int main(void)
{
  struct vstring *reminders[MAX_REMIND];
  char day_str[3], msg_str[MSG_LEN+1];
  int day, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- Không còn khoảng trống --\n");
      break;
    }

    printf("Nhập ngày và nội dung nhắc nhở: ");
    scanf("%2d", &day);
    if (day == 0)
      break;
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]->chars) < 0)
        break;
    for (j = num_remind; j > i; j--)
      reminders[j] = reminders[j-1];

    reminders[i] = malloc(sizeof(struct vstring) + strlen(msg_str) + 1);
    if (reminders[i] == NULL) {
      printf("-- Bộ nhớ còn lại không đủ --\n");
      break;
    }
    reminders[i]->len = strlen(msg_str);

    strcpy(reminders[i]->chars, day_str);
    strcat(reminders[i]->chars, msg_str);

    num_remind++;
  }

  printf("\nNhắc lịch\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]->chars);
  }

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
