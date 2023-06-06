#include <stdio.h>
#include <string.h>

typedef struct
{
  char nome[50];
  char telefone[20];
  char endereco[100];
} Cadastro;

void imprimirRegistro(Cadastro registro, int index)
{
  printf("\nRegistro %02d\n", index);
  printf("Nome: %s\n", registro.nome);
  printf("Telefone: %s\n", registro.telefone);
  printf("Endereco: %s\n", registro.endereco);
}

int main()
{
  int N, i, j, encontrado = 0;
  char busca[50];

  printf("Digite uma quantidade para criar cadastros: ");
  scanf("%d", &N);

  Cadastro vet[N];

  for (i = 0; i < N; i++)
  {
    printf("\n\nRegistro %d\n ", i + 1);

    printf("Digite o nome: ");
    scanf(" %[^\n]s", vet[i].nome);

    printf("Digite o telefone: ");
    scanf(" %[^\n]s", vet[i].telefone);

    printf("Digite o endereco: ");
    scanf(" %[^\n]s", vet[i].endereco);
  }

  for (i = 0; i < N; i++)
  {
    imprimirRegistro(vet[i], i + 1);
  }

  do
  {
    printf("Voce deseja buscar algum registro?");

    printf("\n1) Por primeiro nome\n2) Por telefone\n3) Nao quero buscar registros\n");
    scanf("%d", &j);

    if (j < 1 || j > 3)
    {
      printf("\nDigite uma opcao valida!\n");
    }
  } while (j < 1 || j > 3);

  if (j == 1)
  {
    printf("Digite o primeiro nome do registro que deseja encontrar: \n");
    scanf(" %s", &busca);
    encontrado = 0;
    for (i = 0; i < N; i++)
    {
      if (strcmp(strtok(vet[i].nome, " "), busca) == 0)
      {
        imprimirRegistro(vet[i], i + 1);
        encontrado = 1;
        break;
      }
    }
    if (encontrado == 0)
    {
      printf("\nNenhum registro encontrado");
    }
  }
  else if (j == 2)
  {
    printf("Digite o telefone do registro que deseja encontrar: \n");
    scanf(" %s", &busca);
    encontrado = 0;
    for (i = 0; i < N; i++)
    {
      if (strcmp(vet[i].telefone, busca) == 0)
      {
        imprimirRegistro(vet[i], i + 1);
        encontrado = 1;
        break;
      }
    }
    if (encontrado == 0)
    {
      printf("\nNenhum registro encontrado");
    }
  }
  else if (j == 3)
  {
    printf("\nSaindo do programa...");
    return 0;
  }

  return 0;
}