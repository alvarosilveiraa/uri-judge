#include <stdio.h>

int main() {
  int n, i, in = 0, out = 0;
  scanf("%d", &n);
  if(n < 10000) {
    int x[n];
    for(i = 0; i < n; i++) {
      scanf("%d", &x[n]);
      if(x[n] > - 10000000 && x[n] < 10000000) {
        if(x[n] >= 10 && x[n] <= 20)
          in++;
        else
          out++;
      }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
  }
  return 0;
}
