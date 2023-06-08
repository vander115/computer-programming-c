#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef enum
{
  Domingo,
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado
} diasSemana;

void imprimirDia(diasSemana ds)
{
  switch (ds)
  {
  case Domingo:
    printf("Domingo\n");
    break;
  case Segunda:
    printf("Segunda\n");
    break;
  case Terca:
    printf("Terca\n");
    break;
  case Quarta:
    printf("Quarta\n");
    break;
  case Quinta:
    printf("Quinta\n");
    break;
  case Sexta:
    printf("Sexta\n");
    break;
  case Sabado:
    printf("Sabado\n");
    break;

  default:
    printf("Opcao invalida!");
    break;
  }
}

int main()
{

  int N;

  do
  {
    printf("Digite um numero de 1 a 7 para escolher o dia da semana: \n");
    scanf("%d", &N);
    if (N < 1 || N > 7)
    {
      printf("Número invalido!\n");
    }
  } while (N < 1 || N > 7);

  diasSemana ds = N;

  imprimirDia(ds);

  return 0;
}