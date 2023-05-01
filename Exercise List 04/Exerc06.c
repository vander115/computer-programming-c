#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  char senha[20];

  printf("Digite a senha: ");
  scanf("%s", &senha);

  if (strcmp(senha, "abacate") == 0) {
    printf("ACESSO PERMITIDO\n");
  } else {
    printf("ACESSO NEGADO\n");
  }

  return 0;
}
