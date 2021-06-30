#ifndef FLOAT_H_
#define FLOAT_H_

struct float32 {
  unsigned int sign: 1;
  unsigned int exponent: 8;
  unsigned int fraction: 23;
};

#endif  // FLOAT_H_