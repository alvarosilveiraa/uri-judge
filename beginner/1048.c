#include <stdio.h>

int main() {
  double s;
  char c = '%';
  scanf("%lf", &s);
  if(s <= 400 && s >= 0) {
    printf("Novo salario: %.2lf\n", s + s * 15 / 100);
    printf("Reajuste ganho: %.2lf\n", s * 15 / 100);
    printf("Em percentual: 15 %c\n", c);
  }else if(s <= 800 && s > 400) {
    printf("Novo salario: %.2lf\n", s + s * 12 / 100);
    printf("Reajuste ganho: %.2lf\n", s * 12 / 100);
    printf("Em percentual: 12 %c\n", c);
  }else if(s <= 1200 && s > 800) {
    printf("Novo salario: %.2lf\n", s + s * 10 / 100);
    printf("Reajuste ganho: %.2lf\n", s * 10 / 100);
    printf("Em percentual: 10 %c\n", c);
  }else if(s <= 2000 && s > 1200) {
    printf("Novo salario: %.2lf\n", s + s * 7 / 100);
    printf("Reajuste ganho: %.2lf\n", s * 7 / 100);
    printf("Em percentual: 7 %c\n", c);
  }else if(s > 2000) {
    printf("Novo salario: %.2lf\n", s + s * 4 / 100);
    printf("Reajuste ganho: %.2lf\n", s * 4 / 100);
    printf("Em percentual: 4 %c\n", c);
  }
  return 0;
}
