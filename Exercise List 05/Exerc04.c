#include <stdio.h>

int main()
{

  int negativos = 0, somatorio = 0, maior, menor, num, i = 1;
  float media;

  while (i <= 3)
  {

    scanf("%d", &num);

    if (i == 1)
    {

      maior = num;
      menor = num;
    }
    else
    {

      if (num > maior)
        maior = num;

      if (num < menor)
        menor = num;
    }

    if (num < 0)
      negativos++;

    somatorio += num;

    i++;
  }

  media = (float)somatorio / 3;

  printf("Quantidade de numeros negativos: %d\n", negativos);
  printf("Media dos numeros: %f\n", media);
  printf("Maior numero: %d\n", maior);
  printf("Menor numero: %d\n", menor);

  return 0;
}