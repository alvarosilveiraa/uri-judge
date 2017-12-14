#include <stdio.h>

int main() {
  int n;
  char month[12][10] = {
    {'J', 'a', 'n', 'u', 'a', 'r', 'y'},
    {'F', 'e', 'b', 'r', 'u', 'a', 'r', 'y'},
    {'M', 'a', 'r', 'c', 'h'},
    {'A', 'p', 'r', 'i', 'l'},
    {'M', 'a', 'y'},
    {'J', 'u', 'n', 'e'},
    {'J', 'u', 'l', 'y'},
    {'A', 'u', 'g', 'u', 's', 't'},
    {'S', 'e', 'p', 't', 'e', 'm', 'b', 'e', 'r'},
    {'O', 'c', 't', 'o', 'b', 'e', 'r'},
    {'N', 'o', 'v', 'e', 'm', 'b', 'e', 'r'},
    {'D', 'e', 'c', 'e', 'm', 'b', 'e', 'r'}
  };
  scanf("%d", &n);
  printf("%s\n", month[n - 1]);
  return 0;
}
