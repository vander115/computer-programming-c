#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef struct
{
  char nome[50];
  char telefone[20];
  char endereco[100];
} Cadastro;

int main()
{
  int N, i;

  printf("Digite uma quantidade para criar cadastros: ");
  scanf("%d", &N);

  Cadastro pessoas[N];

  for (i = 0; i < N; i++)
  {
    printf("\n\nRegistro %02d\n", i + 1);
    cadastrarPessoa(&pessoas[i]);
  }

  for (i = 0; i < N; i++)
  {
    printf("\nRegistro %02d\n", i + 1);
    imprimirPessoa(pessoas[i]);
  }
  return 0;
}