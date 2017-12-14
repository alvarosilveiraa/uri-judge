#include <stdio.h>

int main() {
  int i = 1;
  while(i <= 9) {
    printf("I=%d J=%d\n", i, 7);
    printf("I=%d J=%d\n", i, 6);
    printf("I=%d J=%d\n", i, 5);
    i += 2;
  }
  return 0;
}
