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
  struct flight flights[100], tmp;
  int num_flights = 0;
  FILE *f = fopen("flights.dat", "r");
  if (f == NULL) {
    printf("Không thể mở tệp flights.dat\n");
    return 1;
  }
  while (!feof(f)) {
    int h1, m1, h2, m2;
    if (fscanf(f, "%d:%d %d:%d", &h1, &m1, &h2, &m2) == 4) {
      tmp.departure = get_minutes(h1, m1);
      tmp.arrival = get_minutes(h2, m2);
      flights[num_flights++] = tmp;
    } else {
      break;
    }
  }
  fclose(f);
  int h, m;
  printf("Nhập thời gian 24-giờ: ");
  scanf("%d:%d", &h, &m);
  int t = h * 60 + m;
  int min = 25 * 60, j;
  for (int i = 0; i < num_flights; ++i) {
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