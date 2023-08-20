#include <stdio.h>

int potencia(int x, int y)
{
  int resultado = 1;

  if (y > 0)
  {
    while (y > 0)
    {
      resultado = resultado * x;
      y--;
    }
  }

  return resultado;
}

int main()
{
  int x, y;
  printf("Digite o numero da base: ");
  scanf("%d", &x);

  printf("Digite o numero do expoente: ");
  scanf("%d", &y);

  printf("O resultado da potencia e: %d", potencia(x, y));
  return 0;
}
