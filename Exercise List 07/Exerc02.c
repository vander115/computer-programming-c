#include <stdio.h>
#include <string.h>

int main()
{

  char word[50], splitedWord[5];

  printf("Digite algo: ");
  scanf("%[^\n]s", &word);

  strncpy(splitedWord, word, 4);
  splitedWord[4] = '\0';

  printf("O que foi digitado:\n%s", splitedWord);

  return 0;
}