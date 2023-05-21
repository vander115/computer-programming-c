#include <stdio.h>
#include <string.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{
  int i, j, tam, pl = 1;
  char p[50];

  printf("Digite uma palavra: ");
  fgets(p, sizeof(p), stdin);

  if (p[strlen(p) - 1] == '\n')
  {
    p[strlen(p) - 1] = '\0';
  }

  tam = strlen(p);

  for (i = 0, j = tam - 1; i < j; i++, j--)
  {
    if (p[i] != p[j])
    {
      pl = 0;
      break;
    }
  }

  if (pl == 0)
  {
    printf("A palavra não e palindromo\n");
  }
  else
  {
    printf("A palavra e palindromo\n");
  }

  return 0;
}