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

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* Các nguyên mẫu */
void read_cards(int num_in_rank[], int num_in_suit[]);
void analyze_hand(int num_in_rank[], int num_in_suit[],
      bool *straight, bool *flush, bool *four, bool *three,
      int *pairs);
void print_result(bool straight, bool flush, bool four, bool three,
                  int pairs);

/***********************************************************
 * main: Lặp gọi read_cards, analyze_hand, và print_result *
 ***********************************************************/

int main() {
  int num_in_rank[NUM_RANKS];
  int num_in_suit[NUM_SUITS];
  bool straight, flush, four, three;
  int pairs;  /* Có thể nhận các giá trị 0, 1, hoặc 2 */
  for (;;) {
    read_cards(num_in_rank, num_in_suit);
    analyze_hand(num_in_rank, num_in_suit, &straight, &flush, &four,
        &three, &pairs);
    print_result(straight, flush, four, three, pairs);
  }
}

/*******************************************************
 * read_cards: Đọc các quân bài vào các biến ngoại     *
 *             num_in_rank và num_in_suit; Kiểm tra    *
 *             tính hợp lệ và trùng lặp.               *
 *******************************************************/
void read_cards(int num_in_rank[], int num_in_suit[]) {
  bool card_exists[NUM_RANKS][NUM_SUITS];
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;
  for (rank = 0; rank < NUM_RANKS; ++rank) {
    num_in_rank[rank] = 0;
    for (suit = 0; suit < NUM_SUITS; ++suit) {
      card_exists[rank][suit] = false;
    }
  }
  for (suit = 0; suit < NUM_SUITS; ++suit) {
    num_in_suit[suit] = 0;
  }
  while (cards_read < NUM_CARDS) {
    bad_card = false;
    printf("Nhập một quân bài: ");
    rank_ch = getchar();
    switch(rank_ch) {
      // An toàn để kết thúc chương trình
      case '0': exit(EXIT_SUCCESS);
      case '2': rank = 0; break;
      case '3': rank = 1; break;
      case '4': rank = 2; break;
      case '5': rank = 3; break;
      case '6': rank = 4; break;
      case '7': rank = 5; break;
      case '8': rank = 6; break;
      case '9': rank = 7; break;
      case 'm': case 'M': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default: bad_card = true;
    }
    suit_ch = getchar();
    switch (suit_ch) {
      case 'r': case 'R': suit = 0; break;
      case 'c': case 'C': suit = 1; break;
      case 'b': case 'B': suit = 2; break;
      case 't': case 'T': suit = 3; break;
      default: bad_card = true;
    }
    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        bad_card = true;
      }
    }
    if (bad_card) {
      printf("Quân bài không hợp lệ; bỏ qua.\n");
    } else if (card_exists[rank][suit]) {
      printf("Quân bài lặp lại; bỏ qua.\n");
    } else {
      num_in_rank[rank]++;
      num_in_suit[suit]++;
      card_exists[rank][suit] = true;
      ++cards_read;
    }
  }
}

/********************************************************************
 * analyze_hand: Xác định liệu bài có chứa dây, thùng, tứ quý,       *
 *               và/hoặc bộ ba; xác định số lượng cặp; lưu kết quả  *
 *               vào các biến ngoại flush, straight, four, three    *
 *               và pairs.                                          *
 ********************************************************************/
void analyze_hand(int num_in_rank[], int num_in_suit[],
      bool *straight, bool *flush, bool *four, bool *three,
      int *pairs) {
  int num_consec = 0;
  int rank, suit;
  *straight = false;
  *flush = false;
  *four = false;
  *three = false;
  *pairs = 0;

  /* Kiểm tra thùng */
  for (suit = 0; suit < NUM_SUITS; ++suit) {
    if (num_in_suit[suit] == NUM_CARDS) {
      *flush = true;
    }
  }

  /* Kiểm tra dây */
  rank = 0;
  while (num_in_rank[rank] == 0) {
    ++rank;
  }
  for (; rank < NUM_RANKS && num_in_rank[rank] > 0; ++rank) {
    num_consec++;
  }
  if (num_consec == NUM_CARDS) {
    *straight = true;
    return;
  }
  /* Kiểm tra tứ quý, bộ-3, và cặp */
  for (rank = 0; rank < NUM_RANKS; ++rank) {
    if (num_in_rank[rank] == 4) {
      *four = true;
    }
    if (num_in_rank[rank] == 3) {
      *three = true;
    }
    if (num_in_rank[rank] == 2) {
      ++(*pairs);
    }
  }
}

/************************************************************
 * print_result: In kết quả phân loại 5-lá, dựa trên các    *
 *               giá trị của các biến ngoài straight, flush *
 *               four, three, và các cặp.                   *
 ************************************************************/
void print_result(bool straight, bool flush, bool four, bool three,
                  int pairs) {
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