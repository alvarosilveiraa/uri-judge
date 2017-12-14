#include <stdio.h>

int main() {
  int code, count;
  double total;
  scanf("%d %d", &code, &count);
  if(code == 1)
    total = count * 4.0;
  else if(code == 2)
    total = count * 4.5;
  else if(code == 3)
    total = count * 5.0;
  else if(code == 4)
    total = count * 2.0;
  else if(code == 5)
    total = count * 1.5;
  printf("Total: R$ %.2lf\n", total);
  return 0;
}
