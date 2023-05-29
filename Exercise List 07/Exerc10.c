#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  int i, lenght;
  char firstString[50], secondString[50];

  printf("Digite algo: ");
  scanf(" %[^\n]s", &firstString);

  printf("Digite algo: ");
  scanf(" %[^\n]s", &secondString);

  if (strcmp(firstString, secondString) == 0)
  {
    printf("As frases sao iguais");
  }
  else if (strcmp(firstString, secondString) < 0)
  {
    printf("O valor ortografico da primeira frase é menor que o da segunda frase.");
  }
  else if (strcmp(firstString, secondString) > 0)
  {
    printf("O valor ortografico da primeira frase é maior que o da segunda frase.");
  }

  return 0;
}