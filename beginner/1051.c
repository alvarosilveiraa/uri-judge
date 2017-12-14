#include <stdio.h>

int main() {
  double s, rs;
  scanf("%lf", &s);
  if(s <= 2000.0) {
    printf("Isento\n");
  }
  else {
    if(s <= 3000.0) {
      rs = (s - 2000) * 8 / 100;
    }else if(s <= 4500.0) {
      rs = (s - 3000) * 18 / 100;
      rs += 1000 * 8 / 100;
    }else {
      rs = (s - 4500) * 28 / 100;
      rs += 1500 * 18 / 100;
      rs += 1000 * 8 / 100;
    }
    printf("R$ %.2lf\n", rs);
  }
  return 0;
}
