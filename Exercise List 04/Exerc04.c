#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  int N;

  printf("Digite um número inteiro: ");
  scanf("%d", &N);

  if (N % 2 == 0) {
    printf("É PAR\n");
  } else {
    printf("É ÍMPAR\n");
  }
  
  return 0;
}
