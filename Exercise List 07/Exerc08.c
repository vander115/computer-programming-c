#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{
  char fString[100];
  char sString[100];
  int fLenght, sLenght, i, j, counter = 0;

  printf("Digite a primeira string: \n");
  scanf(" %[^\n]s", fString);

  printf("Digite a segunda string: \n");
  scanf(" %[^\n]s", sString);

  fLenght = strlen(fString);
  sLenght = strlen(sString);

  for (i = 0; i <= fLenght - sLenght; i++)
  {
    for (j = 0; j < sLenght; j++)
    {
      if (fString[i + j] != sString[j])
        break;
    }
    if (j == sLenght)
      counter++;
  }

  printf("A segunda string ocorre %d vezes dentro da primeira string.\n", counter);

  return 0;
}
