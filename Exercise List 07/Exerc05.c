#include <stdio.h>
#include <string.h>

int main()
{
  char word[50];

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", &word);

  strcpy(word, strrev(word));

  printf("%s", word);

  return 0;
}