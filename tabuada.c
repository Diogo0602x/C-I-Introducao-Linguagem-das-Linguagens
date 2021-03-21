#include <stdio.h>

int main() {
  int numero;
  printf("Qual tabuada você quer?");
  scanf("%d", &numero);

  for(int i = 0; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}