#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{

  char word[100];

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", &word);

  if (strcmp(word, strrev(word)) == 0)
  {
    printf("A palavra e um palindromo");
  }

  return 0;
}