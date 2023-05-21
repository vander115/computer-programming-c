
#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int mat[5][5], i, j, k, p = 0;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("linha %d | coluna %d\nDigite um numero: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (mat[i][j] <= 1)
      {
        p = 1;
        break;
      }

      for (k = 2; k <= mat[i][j] / 2; k++)
      {
        if (mat[i][j] % k == 0)
        {
          p = 1;
          break;
        }
      }
      if (p == 1)
      {
        break;
      }
    }
    if (p == 1)
    {
      break;
    }
  }

  if (p == 1)
  {
    printf("\nA matriz possui numeros nao primos");
  }
  else
  {
    printf("\nTodos os numeros da matriz sao primos");
  }

  return 0;
}