#include <stdio.h>

int main() {
  double i = 0.0, j = 1.0;
  while(i <= 2) {
    printf("I=%g J=%g\n", i, j);
    j += 1;
    printf("I=%g J=%g\n", i, j);
    j += 1;
    printf("I=%g J=%g\n", i, j);
    i += 0.2;
    j -= 2;
    j += 0.2;
  }
  return 0;
}
