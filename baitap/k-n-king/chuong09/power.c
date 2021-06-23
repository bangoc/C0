// Tính lũy thừa nguyên bằng đệ quy
int power(int x, int n) {
  if (n == 0) {
    return 1;
  }
  return x * power(x, n - 1);
}

// Tính lũy thừa nguyên bằng vòng lặp
int my_power(int x, int n) {
  int p = 1;
  for (int i = 0; i < n; ++i) {
    p *= x;
  }
  return p;
}