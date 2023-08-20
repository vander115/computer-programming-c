#include <stdio.h>

unsigned long long int fatorial(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fatorial(n - 1);
}

int main()
{
  int n;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  printf("O fatorial de %d e igual a %llu\n", n, fatorial(n));

  return 0;
}
