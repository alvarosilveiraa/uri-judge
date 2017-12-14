#include <stdio.h>

int main() {
  int t = 0, c;
  double n, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
  scanf("%lf", &n);
  n += 1e-9;
  printf("NOTAS:\n");
  while (d[t] >= 0.01) {
      c = 0;
      while (n >= d[t]) {
          n -= d[t];
          c++;
      }
      if (d[t] == 1.0) printf("MOEDAS:\n");
      if (d[t] >= 2.0)
          printf("%d nota(s) de R$ %.2f\n", c, d[t]);
      else
          printf("%d moeda(s) de R$ %.2f\n", c, d[t]);
      t++;
  }
  return 0;
}
