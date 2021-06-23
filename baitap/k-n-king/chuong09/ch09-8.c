#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
  int s1 = rand() % 6 + 1,
      s2 = rand() % 6 + 1;
  return s1 + s2;
}

int play_game() {
  int s = roll_dice();
  printf("Kết quả mở của bạn: %d\n", s);
  if (s == 7 || s == 11) {
    // đã chiến thắng
    return 1;
  } else if (s == 2 || s == 3 || s == 12) {
    // đã thua
    return 0;
  }
  for (;;) {
    int s1 = roll_dice();
    printf("Kết quả mở của bạn: %d\n", s1);
    if (s1 == s) {
      // đã chiến thắng
      return 1;
    } else if (s1 == 7) {
      break;
    }
  }
  // đã thua
  return 0;
}

int main() {
  srand((unsigned)time(NULL));
  char c;
  int win = 0, lose = 0;
  for (;;) {
    if (play_game() == 1) {
      printf("Bạn đã thắng!\n");
      ++ win;
    } else {
      printf("Bạn đã thua!\n");
      ++lose;
    }
    printf("\nChơi lại? [y, n]: ");
    scanf(" %c", &c);
    if (c != 'y' && c != 'Y') {
      // Dừng chơi
      break;
    }
    printf("\n");
  }
  printf("Thắng: %d  Thua: %d\n", win, lose);
  return 0;
}