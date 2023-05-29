#include <stdio.h>
#include <string.h>

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