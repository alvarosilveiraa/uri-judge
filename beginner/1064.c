#include <stdio.h>

int main() {
  double n[6], s = 0.0;
  int i, c = 0;
  for(i = 0; i < 6; i++) {
    scanf("%lf", &n[i]);
    if(n[i] > 0) {
      s += n[i];
      c++;
    }
  }
  printf("%d valores positivos\n", c);
  printf("%.1lf\n", s / c);
  return 0;
}
