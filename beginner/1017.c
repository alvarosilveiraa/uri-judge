#include <stdio.h>

int main() {
  int h, s;
  scanf("%d %d", &h, &s);
  printf("%.3lf\n", s * h / 12.0);
  return 0;
}
