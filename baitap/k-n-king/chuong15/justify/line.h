#ifndef LINE_H
#define LINE_H

/**********************************************************
 * clear_line: Xóa dòng hiện tại.                         *
 **********************************************************/
void clear_line(void);

/**********************************************************
 * add_word: Thêm từ vào cuối dòng hiện tại.              *
 *           Nếu nó không phải từ đầu tiên trên dòng thì  *
 *           thêm một dấu cách trước từ.                  *
 **********************************************************/
void add_word(const char *word);

/**********************************************************
 * space_remaining: Trả về số lượng ký tự còn lại         *
 *                  trong dòng hiện tại.                  *
 **********************************************************/
int space_remaining(void);

/**********************************************************
 * write_line: Viết dòng hiện tại với các                 *
 *             điều chỉnh.                                 *
 **********************************************************/
void write_line(void);

/**********************************************************
 * flush_line: Viết dòng hiện tại như đang có, không điều *
 *             chỉnh. Nếu dòng đang rỗng thì không làm gì. *
 **********************************************************/
void flush_line(void);

#endif
