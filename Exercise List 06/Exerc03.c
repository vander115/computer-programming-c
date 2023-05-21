#include <stdio.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{

  int arr[8], i, maior;

  for (i = 0; i < 8; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < 8; i++)
  {
    if (i == 0)
    {
      maior = arr[i];
    }
    else if (arr[i] > maior)
    {
      maior = arr[i];
    }
  }

  printf("O maior valor e: %d", maior);

  return 0;
}