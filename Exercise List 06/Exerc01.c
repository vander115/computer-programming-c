#include <stdio.h>

// Autor: Vanderlei Furtuna - 554397

int main()
{

  int arr[5], i;

  for (i = 0; i < 5; i++)
  {
    arr[i] = i + 1;
  }

  for (i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}