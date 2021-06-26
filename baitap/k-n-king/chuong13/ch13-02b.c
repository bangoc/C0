/* In danh sách nhắc nhở trong một tháng */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50  // Số nhắc nhở tối đa
#define MSG_LEN 60  // Độ dài tối đa của thông điệp nhắc nhở

int read_line(char str[], int n);

#define clear_buffer() do {} while(getchar() != '\n')

int main() {
  char reminders[MAX_REMIND][MSG_LEN + 3 + 6 + 1];
  char day_time_str[3 + 6 + 1], msg_str[MSG_LEN + 1];
  int day, h, m, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- Hết chỗ để lưu --\n");
      break;
    }
    printf("Nhập ngày, thời gian 24-giờ và nhập nhắc nhở: \n");
    printf("\tNgày: ");
    scanf("%2d", &day);
    if (day == 0) {
      break;
    }
    printf("Thời gian (24-giờ): ");
    scanf("%d:%d", &h, &m);
    sprintf(day_time_str, "%2d %02d:%02d ", day, h, m);
    printf("Thông điệp nhắc nhở: ");
    clear_buffer();
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; ++i) {
      if (strcmp(day_time_str, reminders[i]) < 0) {
        break;
      }
    }
    for (j = num_remind; j > i; --j) {
      strcpy(reminders[j], reminders[j - 1]);
    }
    strcpy(reminders[i], day_time_str);
    strcat(reminders[i], msg_str);
    ++num_remind;
  }

  printf("\nNgày ngắc nhở\n");
  for (i = 0; i < num_remind; ++i) {
    printf(" %s\n", reminders[i]);
  }
  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}