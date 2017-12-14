#include <stdio.h>

int main() {
  int i, ih, e, eh, h, m;
  scanf("%d %d %d %d", &i, &ih, &e, &eh);
  if(i > e)
    h = 24 - (i - e);
  if(i < e)
    h = e - i;
  if(i == e)
    h = 24;
  if(ih > eh)
    m = eh - ih;
  else
    m = (ih - eh) * -1;
  if(m < 0) {
    h -= 1;
    m = 60 + m;
  }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
  return 0;
}
