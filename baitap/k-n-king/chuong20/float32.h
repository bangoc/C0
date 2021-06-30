#ifndef FLOAT32_H_
#define FLOAT32_H_

struct float32_little {
  unsigned int fraction: 23;
  unsigned int exponent: 8;
  unsigned int sign: 1;
};

struct float32_big {
  unsigned int sign: 1;
  unsigned int exponent: 8;
  unsigned int fraction: 23;
};

#endif  // FLOAT32_H_