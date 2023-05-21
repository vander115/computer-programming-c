#include <stdio.h>

int main()
{

  int n, i = 1, a = 0, s = 1, t;

  do
  {

    printf("Digite um numero positivo menor ou igual a 46: \n");
    scanf("%d", &n);

  } while (n < 0 || n > 46);

  while (i <= n)
  {
    printf("%d ", a);
    t = a + s;
    a = s;
    s = t;

    i++;
  }

  return 0;
}