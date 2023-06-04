#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{
  int i, lenght;
  char word[50];

  printf("Digite uma string: ");
  scanf("%[^\n]s", &word);

  for (i = 0; word[i] != '\0'; i++)
  {
    lenght++;
  }

  printf("O tamanho da string e: %d", lenght);

  return 0;
}