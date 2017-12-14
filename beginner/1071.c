#include <stdio.h>

int main() {
  int x, y, i, m, n, s = 0;
  scanf("%d %d", &x, &y);
  if(x < y) {
    m = x;
    n = y;
  }else {
    m = y;
    n = x;
  }
  for(i = m + 1; i < n; i++) {
    if(i % 2 != 0) s += i;
  }
  printf("%d\n", s);
  return 0;
}
