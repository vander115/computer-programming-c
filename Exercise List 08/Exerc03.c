#include <stdio.h>

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

  Cadastro vet[N];

  for (i = 0; i < N; i++)
  {
    printf("\n\nRegistro %d\n ", i + 1);

    printf("Digite o nome: ");
    scanf(" %[^\n]s", vet[i].nome);

    printf("\nDigite o telefone: ");
    scanf(" %[^\n]s", vet[i].telefone);

    printf("\nDigite o endereco: ");
    scanf(" %[^\n]s", vet[i].endereco);
  }

  for (i = 0; i < N; i++)
  {
    printf("\nRegistro %02d\n", i + 1);
    printf("\nNome: %s", vet[i].nome);
    printf("\nTelefone: %s", vet[i].telefone);
    printf("\nEndereco: %s", vet[i].endereco);
  }
  return 0;
}