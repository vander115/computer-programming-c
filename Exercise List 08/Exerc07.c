#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef enum
{
  solteiro,
  casado,
  separado,
  viuvo
} estadoCivil;

typedef struct
{
  char nome[50];
  int idade;
  float peso;
  estadoCivil est_civil;
} pessoa;

int selecionarEstCivil()
{
  int N;
  do
  {
    printf("Selecione o estado civil: \n\n1) Solteiro\n2) Casado\n3) Separado\n4) Viuvo\n");
    scanf("%d", &N);

    if (N < 1 || N > 4)
    {
      printf("Voce digitou um numero invalido!");
    }

  } while (N < 1 || N > 4);

  return N;
}

char imprimirEstCivil(estadoCivil est_civil)
{
  switch (est_civil)
  {
  case solteiro:
    printf("Estado Civil: Solteiro(a)");
    break;
  case casado:
    printf("Estado Civil: Casado(a)");
    break;
  case separado:
    printf("Estado Civil: Separado(a)");
    break;
  case viuvo:
    printf("Estado Civil: Viuvo(a)");
    break;

  default:
    printf("Estado Civil: Solteiro(a)");
    break;
  }
}

void povoarPessoa(pessoa *pessoa)
{
  printf("Digite o nome da pessoa: \n");
  scanf(" %[^\n]s", pessoa->nome);

  printf("Digite a idade da pessoa: \n");
  do
  {
    scanf("%d", &(pessoa->idade));
    if (pessoa->idade < 0)
    {
      printf("Idade invalida, digite novamente: \n");
    }
  } while (pessoa->idade < 0);

  printf("Digite o peso da pessoa: \n");
  scanf("%f", &(pessoa->peso));

  pessoa->est_civil = selecionarEstCivil();
}

void exibirDados(pessoa pessoa)
{
  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d anos\n", pessoa.idade);
  printf("Peso: %.2f Kg\n", pessoa.peso);
  imprimirEstCivil(pessoa.est_civil);
}

int main()
{
  const int SIZE = 1;
  int i;

  pessoa conjuntoPessoas[SIZE];

  printf("CADASTRAR PESSOAS");

  for (i = 0; i < SIZE; i++)
  {
    printf("\n\nPessoa %02d\n", i + 1);
    povoarPessoa(&conjuntoPessoas[i]);
  }

  printf("\n\nEXIBICAO DOS DADOS");
  for (i = 0; i < SIZE; i++)
  {
    printf("\n\nPessoa %02d\n", i + 1);
    exibirDados(conjuntoPessoas[i]);
  }

  return 0;
}