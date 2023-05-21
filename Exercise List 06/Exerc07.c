
#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int mat[5][5], i, j, menor;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("Voce esta na linha %d e na coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (i == 0 && j == 0)
      {
        menor = mat[i][j];
      }
      else if (mat[i][j] < menor)
      {
        menor = mat[i][j];
      }
    }
  }

  printf("o menor numero digitado foi: %d", menor);
}