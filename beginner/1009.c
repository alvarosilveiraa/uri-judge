#include <stdio.h>

int main() {
  char name[30];
  double salary, sales;
  scanf("%s %lf %lf", &name, &salary, &sales);
  printf("TOTAL = R$ %.2lf\n", salary + sales * 15 / 100);
  return 0;
}
