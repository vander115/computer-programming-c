#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{

  int N;
  typedef enum
  {
    Janeiro,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
  } meses;

  do
  {
    printf("Digite um numero de 1 a 12 para escolher um mes do ano: \n");
    scanf("%d", &N);
    if (N < 1 || N > 12)
    {
      printf("Número invalido!\n");
    }
  } while (N < 1 || N > 12);

  meses mes = N;

  switch (mes)
  {
  case Janeiro:
    printf("Janeiro - 31 dias");
    break;
  case Fevereiro:
    printf("Fevereiro - 28 dias");
    break;
  case Marco:
    printf("Marco - 31 dias");
    break;
  case Abril:
    printf("Abril - 30 dias");
    break;
  case Maio:
    printf("Maio - 31 dias");
    break;
  case Junho:
    printf("Junho - 30 dias");
    break;
  case Julho:
    printf("Julho - 31 dias");
    break;
  case Agosto:
    printf("Agosto - 30 dias");
    break;
  case Setembro:
    printf("Setembro - 31 dias");
    break;
  case Outubro:
    printf("Outubro - 31 dias");
    break;
  case Novembro:
    printf("Novembro - 30 dias");
  case Dezembro:
    printf("Dezembro - 31 dias");
    break;
  default:
    printf("Opcao invalida!");
    break;
  }

  return 0;
}