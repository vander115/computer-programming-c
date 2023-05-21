#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int i, j, m = 0;
  char mat[4][4];

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("linha %d | coluna %d\nDigite um caracter: ", i + 1, j + 1);
      scanf(" %c", &mat[i][j]);
    }
  }

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (mat[i][j] >= 'A' && mat[i][j] <= 'Z')
      {
        m = 1;
        break;
      }
    }
  }

  if (m == 1)
  {
    printf("\nA matriz possui letra(s) maiscula(s)");
  }
  else
  {
    printf("\nA matriz nao possui letra(s) maiscula(s)");
  }

  return 0;
}