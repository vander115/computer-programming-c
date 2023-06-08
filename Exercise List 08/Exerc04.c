#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef struct
{
  char nome[50];
  char telefone[20];
  char endereco[100];
} Cadastro;

void cadastrarPessoa(Cadastro *pessoa)
{
  printf("Digite o nome: ");
  scanf(" %[^\n]s", pessoa->nome);

  printf("Digite o telefone: ");
  scanf(" %[^\n]s", &(pessoa->telefone));

  printf("Digite o endereco: ");
  scanf(" %[^\n]s", &(pessoa->endereco));
}

void imprimirPessoa(Cadastro pessoa)
{
  printf("Nome: %s\n", pessoa.nome);
  printf("Telefone: %s\n", pessoa.telefone);
  printf("Endereco: %s\n", pessoa.endereco);
}

int main()
{
  int N, i, j, encontrado = 0;
  char busca[50], nome[50];

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
      strcpy(nome, pessoas[i].nome);
      if (strcmp(strtok(nome, " "), busca) == 0)
      {
        printf("Registro %02d\n", i + 1);
        imprimirPessoa(pessoas[i]);
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
      if (strcmp(pessoas[i].telefone, busca) == 0)
      {
        printf("Registro %02d\n", i + 1);
        imprimirPessoa(pessoas[i]);
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