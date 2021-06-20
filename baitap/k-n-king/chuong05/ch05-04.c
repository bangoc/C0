#include <stdio.h>

int main() {
  int speed;
  printf("Nhập tốc độ gió (kn): ");
  scanf("%d", &speed);
  if (speed < 1) {
    printf("Lặng gió\n");
  } else if (speed <= 3) {
    printf("Gió rất nhẹ\n");
  } else if (speed <= 17) {
    printf("Gió nhẹ\n");
  } else if (speed <= 47) {
    printf("Gió mạnh\n");
  } else if (speed <= 63) {
    printf("Bão\n");
  } else {
    printf("Cuồng phong\n");
  }
  return 0;
}