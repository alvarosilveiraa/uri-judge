#include <stdio.h>

int main() {
  int n, y, m, d;
  scanf("%d", &n);
  y = n / 365;
  m = (n - y * 365) / 30;
  d = (n - y * 365) - m * 30;
  printf("%d ano(s)\n", y);
  printf("%d mes(es)\n", m);
  printf("%d dia(s)\n", d);
  return 0;
}
