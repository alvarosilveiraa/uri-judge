#include <stdio.h>

int main() {
  int arr[3], aux[3], temp;
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
  aux[0] = arr[0];
  aux[1] = arr[1];
  aux[2] = arr[2];
  if(aux[0] < aux[1]) {
    temp = aux[0];
    aux[0] = aux[1];
    aux[1] = temp;
  }
  if(aux[1] < aux[2]) {
    temp = aux[1];
    aux[1] = aux[2];
    aux[2] = temp;
  }
  if(aux[0] < aux[1]) {
    temp = aux[0];
    aux[0] = aux[1];
    aux[1] = temp;
  }
  printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", aux[2], aux[1], aux[0], arr[0], arr[1], arr[2]);
  return 0;
}
