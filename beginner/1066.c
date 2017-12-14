#include <stdio.h>

int main() {
  int n[5], i, pa = 0, im = 0, po = 0, ne = 0;
  for(i = 0; i < 5; i++) {
    scanf("%d", &n[i]);
    if(n[i] % 2 == 0)
      pa++;
    else
      im++;

    if(n[i] > 0)
      po++;
    else if(n[i] < 0)
      ne++;
  }
  printf("%d valor(es) par(es)\n", pa);
  printf("%d valor(es) impar(es)\n", im);
  printf("%d valor(es) positivo(s)\n", po);
  printf("%d valor(es) negativo(s)\n", ne);
  return 0;
}
