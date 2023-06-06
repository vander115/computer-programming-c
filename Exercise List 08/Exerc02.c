#include <stdio.h>

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

  estudante estudante1;

  printf("Digite o nome do estudante: \n");
  gets(estudante1.nome);

  printf("Digite a matricula do estudante: \n");
  scanf("%d", &estudante1.matricula);

  for (i = 0; i < 3; i++)
  {
    printf("Digite a nota %d do aluno: \n", i + 1);
    scanf("%f", &estudante1.notas[i]);
  }

  for (i = 0; i < 3; i++)
  {
    soma += estudante1.notas[i];
  }

  estudante1.media = soma / 3.0;

  printf("\nOs dados do aluno sao: \n");

  printf("Nome: %s\n", estudante1.nome);
  printf("Matricula: %d\n", estudante1.matricula);
  printf("Notas: ");
  for (i = 0; i < 3; i++)
  {
    printf("%.1f ", estudante1.notas[i]);
  }
  printf("\nMedia: %.2f", estudante1.media);

  printf("O tamanho alocado na memoria é: %d bytes", sizeof(estudante1));

  return 0;
}