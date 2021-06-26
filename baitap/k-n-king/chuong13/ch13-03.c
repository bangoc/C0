/* Sinh ngẫu nhiên các lá bài trên tay của một người chơi*/

#include <stdbool.h>  // >= C99
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main() {
  bool in_hand[NUM_SUITS][NUM_RANKS] = {0};
  int num_cards, rank, suit;
  const char *rank_name[] = {"Hai", "Ba", "Bốn", "Năm", "Sáu", "Bẩy", "Tám", "Chín",
                "Mười", "Bồi (J)", "Đầm (Q)", "Già (K)", "Át (A)"};
  const char *suit_name[] = {"Rô", "Cơ", "Bích", "Tép"};
  srand((unsigned)time(NULL));
  printf("Nhập số quân bài trên tay: ");
  scanf("%d", &num_cards);
  printf("Bài của bạn: \n");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;  // Sinh ngẫu nhiên chất bài
    rank = rand() % NUM_RANKS;  // Sinh ngẫu nhiên con bài
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      --num_cards;
      printf("%s %s\n", rank_name[rank], suit_name[suit]);
    }
  }
  return 0;
}