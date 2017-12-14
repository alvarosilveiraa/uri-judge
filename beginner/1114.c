#include <stdio.h>

int main() {
  int x, y = 2002;
  while(1) {
    scanf("%d", &x);
    if(x == y) return printf("Acesso Permitido\n");
    else printf("Senha Invalida\n");
  }
  return 0;
}
