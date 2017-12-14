#include <stdio.h>

int main() {
  int a, b, c, gt;
  scanf("%d %d %d", &a, &b, &c);
  gt = (a + b + abs(a - b)) / 2;
  if(gt < c) gt = c;
  printf("%d eh o maior\n", gt);
  return 0;
}
