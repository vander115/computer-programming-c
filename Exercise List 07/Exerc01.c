#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{

  char word[50];

  printf("Digite uma string: ");
  scanf("%[^\n]s", &word);

  printf("O que foi digitado:\n%s", word);

  return 0;
}