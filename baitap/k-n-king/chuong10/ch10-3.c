/* Phân loại một số bộ 5-lá bài:                                        *
 * Sảnh vua - Royal flush - Dãy đồng chất với Át là quân bài cao nhất  *
 * Thùng phá sảnh - Straight flush - Dây đồng chất                     *
 * Tứ quý - Four of a kind - Bốn quân đồng số                          *
 * Cù lũ - Full house - Một bộ ba và một đôi                           *
 * Đồng chất (thùng) - Flush - năm quân cùng mầu                       *
 * Dây (sảnh) - Straight - Các số của năm quân tạo thành một dãy       *
 * Bộ ba - Three of a kind - Ba quân bài cùng số                       *
 * Đôi (1, 2) - Pair  - Hai lá bài đồng số                             *
 * Bài cao - High card - không thuộc các trường hợp đã liệt kê         */
#include <stdbool.h>  // C99
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5

/* Các biến ngoại */
char hand[NUM_CARDS][2];
char ranks[256] = {['2'] = 1, ['3'] = 2, ['4'] = 3, ['5'] = 4, ['6'] = 5, ['7'] = 6, ['8'] = 7, ['9'] = 8,
                  ['m'] = 9, ['M'] = 9, ['j'] = 10, ['J'] = 10, ['q'] = 11, ['Q'] = 11,
                  ['k'] = 12, ['K'] = 12, ['a'] = 13, ['A'] = 13};
char suits[256] = {['r'] = 1, ['R'] = 1, ['c'] = 2, ['C'] = 2,
                   ['b'] = 3, ['B'] = 3, ['t'] = 4, ['T'] = 4};
bool straight, flush, three, four;
int pairs;

/* Các nguyên mẫu */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/***********************************************************
 * main: Lặp gọi read_cards, analyze_hand, và print_result *
 ***********************************************************/

int main() {
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Đọc các quân bài vào biến ngoại hand.      *
 *             Kiểm tra tính hợp lệ và trùng lặp khi đọc. *
 **********************************************************/
void read_cards() {
  char ch, rank_ch, suit_ch;
  int card;
  bool bad_card, repeated_card;
  int cards_read = 0;
  for (card = 0; card < NUM_CARDS; ++card) {
    hand[card][0] = hand[card][1] = 0;
  }
  while (cards_read < NUM_CARDS) {
    bad_card = false;
    printf("Nhập một quân bài: ");
    rank_ch = getchar();
    if (rank_ch == '0') {
      exit(EXIT_SUCCESS);
    }
    bad_card = (ranks[rank_ch] == 0);
    suit_ch = getchar();
    bad_card = (suits[suit_ch] == 0);
    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        bad_card = true;
      }
    }
    if (bad_card) {
      printf("Quân bài không hợp lệ; bỏ qua.\n");
      continue;
    }
    repeated_card = false;
    for (card = 0; card < cards_read; ++card) {
      if (hand[card][0] == rank_ch && hand[card][1] == suit_ch) {
        repeated_card = true;
        break;
      }
    }
    if (repeated_card) {
      printf("Quân bài lặp lại; bỏ qua.\n");
      continue;
    }
    hand[cards_read][0] = rank_ch;
    hand[cards_read][1] = suit_ch;
    ++cards_read;
  }
}

/********************************************************************
 * analyze_hand: Xác định liệu bài có chứa dây, thùng, tứ quý,       *
 *               và/hoặc bộ ba; xác định số lượng cặp; lưu kết quả  *
 *               vào các biến ngoại flush, straight, four, three    *
 *               và pairs.                                          *
 ********************************************************************/
void analyze_hand() {
  int num_consec = 0;
  int card;
  int count;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
  /* Kiểm tra thùng */
  flush = true;
  for (card = 1; card < NUM_CARDS; ++card) {
    if (hand[card][1] != hand[0][1]) {
      flush = false;
      break;
    }
  }

  // Sắp xếp để kiểm tra tiếp
  for (int i = 0; i < NUM_CARDS - 1; ++i) {
    for (int j = i + 1; j < NUM_CARDS; ++j) {
      if (ranks[hand[i][0]] > ranks[hand[j][0]]) {
        char tmp = hand[i][0];
        hand[i][0] = hand[j][0];
        hand[j][0] = tmp;

        tmp = hand[i][1];
        hand[i][1] = hand[j][1];
        hand[j][1] = tmp;
      }
    }
  }
  /* Kiểm tra dây */
  straight = true;
  for (card = 1; card < NUM_CARDS; ++card) {
    if (ranks[hand[card][0]] - ranks[hand[card - 1][0]] != 1) {
      straight = false;
      break;
    }
  }
  if (straight) {
    // Đã tạo thành dãy thì không thể có đôi, bộ ba hay tứ quý
    return;
  }

  /* Kiểm tra tứ quý, bộ-3, và cặp */
  card = 0;
  for (;card < NUM_CARDS;) {
    int cc = 0;
    char rank_ch = hand[card][0];
    for (; card < NUM_CARDS; ++card) {
      if (hand[card][0] == rank_ch) {
        ++cc;
      } else {
        break;
      }
    }
    if (cc == 2) {
      ++pairs;
    } else if (cc == 3) {
      three = true;
    } else if (cc == 4) {
      four = true;
    }
  }
}

/************************************************************
 * print_result: In kết quả phân loại 5-lá, dựa trên các    *
 *               giá trị của các biến ngoài straight, flush *
 *               four, three, và các cặp.                   *
 ************************************************************/
void print_result() {
  if (straight && flush) {
    printf("Thùng phá sảnh");
  } else if (four) {
    printf("Tứ quý");
  } else if (three && pairs == 1) {
    printf("Cù lũ");
  } else if (flush) {
    printf("Thùng");
  } else if (straight) {
    printf("Dây");
  } else if (three) {
    printf("Bộ ba");
  } else if (pairs == 2) {
    printf("Hai đôi");
  } else if (pairs == 1) {
    printf("Một cặp");
  } else {
    printf("Bài cao");
  }
  printf("\n\n");
}