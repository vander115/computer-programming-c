
#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int mat1[3][3], mat2[3][3], result[3][3], i, j;

  printf("Matriz 1: \n\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("linha %d | coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("\nMatriz 2: \n\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("linha %d | coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat2[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  printf("A soma das matrizes e: \n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("[%d]", result[i][j]);
    }
    printf("\n");
  }
}