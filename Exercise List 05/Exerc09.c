#include <stdio.h>

int main()
{

  int n, P, i = 2;

  printf("Digite um numero: ");
  scanf("%d", &n);

  // para um número n não ser primo ele deve ser divisivel por, ao menos, dois numeros diferentes de 1 e ele mesmo. Um numero maior ou igual a raiz quadrada de n e o outro menor ou igual a raiz quadrada de n. n /2 é proximo ao valor da raiz quadrada de n, por isso o laço while vai até n / 2.

  while (i <= n / 2)
  {
    if (n % i == 0)
    {
      P = 0;

      // Se o número for divisivel por um número diferente de 1 e ele mesmo, ele não é primo, então o laço é interrompido.
      break;
    }
    i++;
  }

  if (P == 0)
  {
    printf("O numero %d nao e primo", n);
  }
  else
  {
    printf("O numero %d e primo", n);
  }

  return 0;
}