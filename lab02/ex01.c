#include <stdio.h>

#define NUM_INTEIROS 3

int main() {
  int max, valor, i = 0;
  scanf("%d", &max);

  while(++i < NUM_INTEIROS) {
    scanf("%d", &valor);
    if (valor > max) {
      max = valor;
    }
  }
  printf("%d\n", max);
  return 0;
}
