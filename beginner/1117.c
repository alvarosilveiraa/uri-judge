#include <stdio.h>

int main() {
  double n, v = 11;
  while(1) {
    scanf("%lf", &n);
    if(n < 0 || n > 10) {
      printf("nota invalida\n");
    }else {
      if(v != 11) {
        printf("media = %.2lf\n", (n + v) / 2);
        break;
      }
      v = n;
    }
  }
  return 0;
}
