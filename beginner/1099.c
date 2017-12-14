#include <stdio.h>

int main() {
  int n, i, x, y, aux;
  scanf("%d", &n);
  int s[n];
  for(i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    s[i] = 0;
    if(x > y) {
      aux = x;
      x = y;
      y = aux;
    }
    for(x++; x < y; x++) {
      if(x % 2 != 0) s[i] += x;
    }
  }
  for(i = 0; i < n; i++) {
    printf("%d\n", s[i]);
  }
  return 0;
}
