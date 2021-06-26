/* In danh sách nhắc nhở trong một tháng */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50  // Số nhắc nhở tối đa
#define MSG_LEN 60  // Độ dài tối đa của thông điệp nhắc nhở

int read_line(char str[], int n);

#define clear_buffer() do {} while(getchar() != '\n')

int main() {
  char reminders[MAX_REMIND][MSG_LEN + 6 + 1];
  char day_month_str[6 + 1], msg_str[MSG_LEN + 1];
  int day, month, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- Hết chỗ để lưu --\n");
      break;
    }
    printf("Nhập ngày và nhập nhắc nhở: \n");
    printf("Ngày (dd/mm): ");
    scanf("%2d/%2d", &day, &month);
    if (day == 0) {
      break;
    }
    sprintf(day_month_str, "%02d/%02d ", month, day);
    printf("Nội dung nhắc nhở: ");
    clear_buffer();
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; ++i) {
      if (strcmp(day_month_str, reminders[i]) < 0) {
        break;
      }
    }
    for (j = num_remind; j > i; --j) {
      strcpy(reminders[j], reminders[j - 1]);
    }
    strcpy(reminders[i], day_month_str);
    strcat(reminders[i], msg_str);
    ++num_remind;
  }

  printf("\nNgày ngắc nhở\n");
  for (i = 0; i < num_remind; ++i) {
    printf("%c%c/%c%c %s\n",
           reminders[i][3], reminders[i][4], reminders[i][0], reminders[i][1], reminders[i] + 6);
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