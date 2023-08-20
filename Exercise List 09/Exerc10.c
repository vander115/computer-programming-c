#include <stdio.h>

int fibonacci(int n)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  int x, i;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &x);

  printf("Serie de Fibonacci ate o %dº termo:\n", x);

  for (i = 1; i <= x; i++)
  {
    printf("%d ", fibonacci(i));
  }
  printf("\n");

  return 0;
}
