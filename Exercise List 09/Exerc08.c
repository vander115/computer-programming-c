#include <stdio.h>

int NFibonacci(int n)
{
  int a = 0, b = 1, resultado;

  if (n == 1)
  {
    return a;
  }
  else if (n == 2)
  {
    return b;
  }
  else
  {
    for (int i = 3; i <= n; i++)
    {
      resultado = a + b;
      a = b;
      b = resultado;
    }
    return resultado;
  }
}

int main()
{
  int N;

  do
  {
    printf("Digite um numero inteiro positivo (0 < N < 46): ");
    scanf("%d", &N);

    if (N < 0 || N > 46)
    {
      printf("O valor digitado esta fora do intervalo estabelecido, tente novamente");
    }

  } while (N < 0 || N > 46);

  printf("Os primeiros %d numeros da serie de Fibonacci:\n", N);
  for (int i = 1; i <= N; i++)
  {
    printf("%d ", NFibonacci(i));
  }

  printf("\n");

  return 0;
}
