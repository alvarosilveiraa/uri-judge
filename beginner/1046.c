#include <stdio.h>

int main() {
  int i, e, dur;
  scanf("%d %d", &i, &e);
  if(i > e)
    dur = 24 - (i - e);
  if(i < e)
    dur = e - i;
  if(i == e)
    dur = 24;
  printf("O JOGO DUROU %d HORA(S)\n", dur);
  return 0;
}
