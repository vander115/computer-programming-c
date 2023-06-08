#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef struct
{
  char nome[50];
  char cpf[14];
  int idade;
} pessoa;

void cadastrarPessoa(pessoa *pessoa)
{
  printf("Digite o nome da pessoa: ");
  scanf(" %[^\n]s", pessoa->nome);

  printf("Digite a idade da pessoa: ");
  scanf("%d", &(pessoa->idade));

  printf("Digite o CPF da pessoa: ");
  scanf(" %[^\n]s", &(pessoa->cpf));
}

void imprimirPessoa(pessoa pessoa)
{
  printf("CPF: %s\nNome: %s\nIdade: %d\n", pessoa.cpf, pessoa.nome, pessoa.idade);
}

int main()
{
  pessoa pessoa01;
  cadastrarPessoa(&pessoa01);
  imprimirPessoa(pessoa01);
  return 0;
}