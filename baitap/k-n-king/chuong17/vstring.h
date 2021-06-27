#ifndef VSTRING_H_
#define VSTRING_H_

struct vstring {
  int len;
  char chars[];  /* Phần tử là mảng kích thước linh hoạt (C99( */
};

#endif  // VSTRING_H_