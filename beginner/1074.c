#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  if(n < 10000) {
    int x[n];
    for(i = 0; i < n; i++) {
      scanf("%d", &x[n]);
      if(x[n] > - 10000000 && x[n] < 10000000) {
        if(x[n] % 2 == 0 && x[n] > 0) {
          printf("EVEN POSITIVE\n");
        }else if(x[n] % 2 != 0 && x[n] > 0) {
          printf("ODD POSITIVE\n");
        }else if(x[n] % 2 == 0 && x[n] < 0) {
          printf("EVEN NEGATIVE\n");
        }else if(x[n] % 2 != 0 && x[n] < 0) {
          printf("ODD NEGATIVE\n");
        }else {
          printf("NULL\n");
        }
      }
    }
  }
  return 0;
}
