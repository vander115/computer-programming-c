#include <stdio.h>

int main()
{
  const int SIZE = 5;
  int array[SIZE], *ptr = array, i;

  printf("Digite 5 numeros:\n");
  for (i = 0; i < SIZE; i++)
  {
    scanf("%d", ptr + i);
    printf("%X\n", &ptr + i);
  }

  printf("O dobro de cada numero e:\n");
  for (i = 0; i < SIZE; i++)
  {
    printf("%d\n", *(ptr + i) * 2);
  }

  return 0;
}
