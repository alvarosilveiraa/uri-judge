#include <stdio.h>

int main() {
  int x, s, c = 0, i = 0;
  scanf("%d", &x);
  while(1) {
    if(c == 6) break;
    s = x + i;
    if(s % 2 != 0) {
      printf("%d\n", s);
      c++;
    }
    i++;
  }
  return 0;
}
