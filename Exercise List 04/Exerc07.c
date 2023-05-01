#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  int A, B;

  printf("Digite um número inteiro: ");
  scanf("%d", &A);

  printf("Digite outro número inteiro: ");
  scanf("%d", &B);

  if (A % B == 0) {
    printf("%d é divisível por %d\n", A, B);
  } else {
    printf("%d não é divisível por %d\n", A, B);
  }

  return 0;
}
