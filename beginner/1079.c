#include <stdio.h>

int main() {
  int n, i, j;
  scanf("%d", &n);
  double m[n], val[3];
  for(i = 0; i < n; i++) {
    scanf("%lf %lf %lf", &val[0], &val[1], &val[2]);
    m[i] = (val[0] * 2 + val[1] * 3 + val[2] * 5) / 10;
  }
  for(i = 0; i < n; i++) {
    printf("%.1lf\n", m[i]);
  }
  return 0;
}
