#include <stdio.h>

int main()
{

  int i = 0, d = 0, n1, n2, soma = 0, maior, menor;
  float media = 0.0;

  do
  {
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2)
    {
      printf("Numeros iguais, digite novamente\n");
    }
  } while (n1 == n2);

  if (n1 > n2)
  {
    maior = n1;
    menor = n2;
  }
  else
  {
    maior = n2;
    menor = n1;
  }

  i = menor;

  while (i <= maior)
  {
    soma += i;
    i++;
    d++;
  }

  media = (float)soma / d;

  printf("Soma: %d\n", soma);
  printf("Media: %.2f\n", media);

  return 0;
}