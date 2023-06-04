#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{

  char word[50], splitedWord[5];

  printf("Digite uma string: ");
  scanf("%[^\n]s", &word);

  strncpy(splitedWord, word, 4);
  splitedWord[4] = '\0';

  printf("O que foi digitado:\n%s", splitedWord);

  return 0;
}