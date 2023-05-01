#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float N;

  printf("Digite um número real: ");
  scanf("%f", &N);

  if (N > 0) {
    printf("É POSITIVO\n");
  } else if (N < 0) {
    printf("É NEGATIVO\n");
  } else {
    printf("É ZERO\n");
  }

  return 0;
}
