#ifndef READLINE_H
#define READLINE_H

/**********************************************************
 * read_line: Bỏ qua các dấu cách ở đầu, sau đó đọc phần  *
 *            còn lại của dòng được nhập và lưu nó trong  *
 *            str. Cắt ngắn dòng nếu độ dài của nó vượt   *
 *            quá n. Trả về số lượng ký tự được lưu.      *
 **********************************************************/
int read_line(char str[], int n);

#endif
