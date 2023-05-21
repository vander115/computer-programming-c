#include <stdio.h>

int main()
{
  int h, i, j, k;

  printf("Digite a altura do triângulo: ");
  scanf("%d", &h);

  i = 1;

  while (i <= h)
  {

    k = h;

    while (k > i)
    {

      printf(" ");
      k--;
    }

    j = 1;

    while (j <= 2 * i - 1)
    {

      printf("*");
      j++;
    }

    printf("\n");
    i++;
  }

  return 0;
}
