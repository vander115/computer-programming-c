#include <stdio.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{

  int arr[10], i, soma;

  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < 10; i++)
  {
    soma += arr[i];
  }

  printf("A soma dos numeros digitados e: %d\n", soma);

  return 0;
}