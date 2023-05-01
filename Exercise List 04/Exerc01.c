#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  int N;

  printf("Digite um número inteiro: ");
  scanf("%d", &N);

  if(N > 10) {
    printf("É MAIOR QUE 10\n");
  } else {
    printf("NÃO É MAIOR QUE 10\n");
  }

  return 0;
}
