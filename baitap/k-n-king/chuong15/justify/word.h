#ifndef WORD_H
#define WORD_H

/**********************************************************
 * read_word: Đọc từ tiếp theo từ luồng nhập và lưu nó    *
 *            trong word. Làm rỗng word nếu không thể đọc *
 *            thêm từ nào nữa vì tệp đã kết thúc.         *
 *            Cắt ngắn word nếu độ dài của nó vượt quá    *
 *            len.                                        *
 **********************************************************/
void read_word(char *word, int len);

#endif
