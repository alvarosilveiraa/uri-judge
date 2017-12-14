#include <stdio.h>

int main() {
  int index, i, n, m = 0;
  for(i = 0; i < 100; i++) {
    scanf("%d", &n);
    if(n > m) {
      m = n;
      index = i;
    }
  }
  printf("%d\n%d\n", m, index + 1);
  return 0;
}
