#include <stdio.h>

int main()
{

  int n, i = 1, s = 1;

  printf("Digite um numero: \n");
  scanf("%d", &n);

  while (i <= n)
  {
    printf("%d\n", s);
    s += 4;

    i++;
  }

  return 0;
}