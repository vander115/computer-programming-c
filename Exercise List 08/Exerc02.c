#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{
  int i;
  float soma;

  typedef struct
  {
    char nome[40];
    int matricula;
    float notas[3];
    float media;
  } estudante;

  estudante estudante01;

  printf("Digite o nome do estudante: \n");
  gets(estudante01.nome);

  printf("Digite a matricula do estudante: \n");
  scanf("%d", &estudante01.matricula);

  for (i = 0; i < 3; i++)
  {
    printf("Digite a nota %d do aluno: \n", i + 1);
    scanf("%f", &estudante01.notas[i]);
  }

  for (i = 0; i < 3; i++)
  {
    soma += estudante01.notas[i];
  }

  estudante01.media = soma / 3.0;

  printf("\nOs dados do aluno sao: \n");

  printf("Nome: %s\n", estudante01.nome);
  printf("Matricula: %d\n", estudante01.matricula);
  printf("Notas: ");
  for (i = 0; i < 3; i++)
  {
    printf("%.1f ", estudante01.notas[i]);
  }
  printf("\nMedia: %.2f\n", estudante01.media);

  printf("O tamanho alocado na memoria e: %d bytes", sizeof(estudante01));

  return 0;
}