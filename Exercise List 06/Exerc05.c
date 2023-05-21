
#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int mat[3][3], i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Voce esta na linha %d e na coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("Os valores digitados foram: \n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("[%d]", mat[i][j]);
    }
    printf("\n");
  }
}