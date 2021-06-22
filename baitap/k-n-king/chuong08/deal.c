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
  const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9',
                            'm' /*mười*/, 'j', 'q', 'k', 'a'};
  const char suit_code[] = {'r' /* rô */, 'c' /* cơ */, 'b' /* bích */, 't' /* tép */};
  srand((unsigned)time(NULL));
  printf("Nhập số quân bài trên tay: ");
  scanf("%d", &num_cards);
  printf("Bài của bạn: ");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;  // Sinh ngẫu nhiên chất bài
    rank = rand() % NUM_RANKS;  // Sinh ngẫu nhiên con bài
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      --num_cards;
      printf(" %c%c", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");
  return 0;
}