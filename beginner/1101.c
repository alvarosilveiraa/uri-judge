#include <stdio.h>

int main() {
  int x, y, aux, s;
  while(1) {
    scanf("%d %d", &x, &y);
    if(x <= 0 || y <= 0) break;
    s = 0;
    if(x > y) {
      aux = x;
      x = y;
      y = aux;
    }
    for(x; x <= y; x++) {
      s += x;
      printf("%d ", x);
    }
    printf("Sum=%d\n", s);
  }
  return 0;
}
