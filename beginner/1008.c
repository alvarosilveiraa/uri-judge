#include <stdio.h>

int main() {
  int n, h;
  double v;
  scanf("%d %d %lf", &n, &h, &v);
  printf("NUMBER = %d\n", n);
  printf("SALARY = U$ %.2lf\n", v * h);
  return 0;
}
