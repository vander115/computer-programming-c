#include <stdio.h>

int menu, i = 1, s = 1, t = 1;

int main()
{

  printf("Menu da Tabuada\n\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Todas\n6 - Sair\n\nEscolha uma opcao:");

  scanf("%d", &menu);
  printf("%d", menu);

  if (menu < 1 || menu > 6)
  {
    printf("Opcao invalida...");
    return 0;
  }

  if (menu == 1 || menu == 5)
  {
    printf("\nTabuada de Soma\n\n");
    while (i <= 10)
    {
      while (s <= 10)
      {
        if (s == 1)
        {
          printf("--------------\n|     %2d     |\n--------------\n", i);
        }

        printf("|%2d + %2d = %2d|\n", s, i, s + i);

        if (s == 10)
        {
          printf("--------------\n");
        }

        s++;
      }

      i++;
      s = 1;
    }
  }

  i = 1;
  if (menu == 2 || menu == 5)
  {
    printf("\nTabuada de Subtracao\n\n");
    while (i <= 10)
    {
      while (s <= 10 + i)
      {
        if (s == 1)
        {
          s += i;
          printf("--------------\n|     %2d     |\n--------------\n", i);
        }

        printf("|%2d - %2d = %2d|\n", s, i, s - i);

        if (s == 10 + i)
        {
          printf("--------------\n");
        }

        s++;
      }

      i++;
      s = 1;
    }
  }

  i = 1;
  if (menu == 3 || menu == 5)
  {
    printf("\nTabuada de Multiplicacao\n\n");
    while (i <= 10)
    {
      while (s <= 10)
      {
        if (s == 1)
        {
          printf("---------------\n|     %2d      |\n---------------\n", i);
        }

        printf("|%2d x %2d = %3d|\n", s, i, s * i);

        if (s == 10)
        {
          printf("---------------\n");
        }

        s++;
      }

      i++;
      s = 1;
    }
  }

  i = 1;
  if (menu == 4 || menu == 5)
  {
    printf("\nTabuada de Divisao\n\n");
    while (i <= 10)
    {
      while (s <= 10 * i)
      {
        if (s == 1)
        {
          s *= i;
          printf("----------------\n|      %2d      |\n----------------\n", i);
        }

        printf("|%3d : %2d = %3d|\n", s, i, s / i);

        if (s == 10 * i)
        {
          printf("----------------\n");
        }

        s += i;
      }

      i++;
      s = 1;
    }
  }

  return 0;
}