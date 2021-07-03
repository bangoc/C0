/* Định dạng một tệp văn bản. Chương trình hiện chỉ hoạt động đúng trên
   bảng mã ASCII. Chương trình hoạt động sai trên các văn bản Unicode do
   số lượng ký tự khác với số lượng bytes có trong biểu diễn.
 */
#include <stdio.h>
#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
  char word[MAX_WORD_LEN+2];
  int word_len;

  if (argc != 3) {
    printf("Sử dụng: ./justify tệp-vào tệp-ra\n");
    return 0;
  }
  if (freopen(argv[1], "r", stdin) == NULL ||
      freopen(argv[2], "w", stdout) == NULL) {
    printf("Lỗi mở tệp.\n");
    return 1;
  }

  clear_line();
  for (;;) {
    read_word(word, MAX_WORD_LEN+1);
    word_len = strlen(word);
    if (word_len == 0) {
      flush_line();
      return 0;
    }
    if (word_len > MAX_WORD_LEN) {
      word[MAX_WORD_LEN] = '*';
    }
    if (word_len + 1 > space_remaining()) {
      write_line();
      clear_line();
    }
    add_word(word);
  }
  fflush(stdout);
  return 0;
}
