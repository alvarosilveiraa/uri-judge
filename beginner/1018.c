#include <stdio.h>

int main() {
  int n, c, i = 0, b[] = {100, 50, 20, 10, 5, 2, 1};
  scanf("%d", &n);
  while(b[i] >= 1) {
    c = 0;
    while(n >= b[i]) {
      n -= b[i];
      c++;
    }
    printf("%d nota(s) de R$ %d,00\n", c, b[i]);
    i++;
  }
  return 0;
}
