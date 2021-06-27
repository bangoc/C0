#include <stdio.h>

struct flight {
  int departure;
  int arrival;
};

int get_minutes(int hour, int minute) {
  return hour * 60 + minute;
}

void get_time(int minutes, int *hour, int *minute) {
  *hour   = minutes/60;
  *minute = minutes % 60;
}

int main() {
  int h, m;
  printf("Nhập thời gian 24-giờ: ");
  scanf("%d:%d", &h, &m);
  int t = h * 60 + m;
  struct flight flights[] = { {get_minutes(8, 0), get_minutes(10, 16)},
      {get_minutes(9, 43), get_minutes(11, 52)},
      {get_minutes(11, 17), get_minutes(13, 31)},
      {get_minutes(12, 47), get_minutes(15, 0)},
      {get_minutes(14, 0), get_minutes(16, 8)},
      {get_minutes(15, 45), get_minutes(17, 55)},
      {get_minutes(19, 0), get_minutes(21, 20)},
      {get_minutes(21, 45), get_minutes(23, 58)}
  };
  int n = sizeof(flights)/sizeof(flights[0]);
  int min = 25 * 60, j;
  for (int i = 0; i < n; ++i) {
    int d = flights[i].departure;
    int x = t < d? d - t: t - d;
    if (x > 12 * 60) {
      x = 24 * 60 - x;
    }
    if (min > x) {
      min = x;
      j = i;
    }
  }
  get_time(flights[j].departure, &h, &m);
  if (h >= 12) {
    printf("Thời gian đi gần nhất là: %02d:%02d p.m., ", h == 12? h: h - 12, m);
  } else {
    printf("Thời gian đi gần nhất là: %02d:%02d a.m., ", h, m);
  }
  get_time(flights[j].arrival, &h, &m);
  if (h >= 12) {
    printf("đến lúc: %02d:%02d p.m.\n", h == 12? h: h - 12, m);
  } else {
    printf("đến lúc: %02d:%02d a.m.\n", h, m);
  }
  return 0;
}