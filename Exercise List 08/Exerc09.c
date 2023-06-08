#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef union
{
  int inteiro;
  float real;
} tipo;

int main()
{
  tipo tp01;

  tp01.inteiro = 10;

  printf("Valor do tipo float: %.2f\n", tp01.real);

  return 0;
}