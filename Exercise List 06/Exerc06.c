
#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int mat[4][4], i, j, soma = 0;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("Voce esta na linha %d e na coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 4; i++)
  {
    soma += mat[i][i];
  }

  printf("A soma dos valores da diagonal principal e: %d", soma);
}