#include <stdio.h>
#include <string.h>

int main()
{

  char word[50];

  printf("Digite algo: ");
  scanf("%[^\n]s", &word);

  printf("O que foi digitado:\n%s", word);

  return 0;
}