#include <stdio.h>

unsigned long long int fatorial(int x)
{
  unsigned long long int resultado = 1;

  while (x > 1)
  {
    resultado *= x;
    x--;
  }

  return resultado;
}

int main()
{
  int x;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &x);

  printf("O fatorial de %d e igual a %llu\n", x, fatorial(x));

  return 0;
}
