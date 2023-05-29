#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i, lenght;
  char word[50];

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", &word);

  lenght = strlen(word);

  for (i = lenght - 1; i >= 0; i--)
  {
    printf("%c", toupper(word[i]));
  }

  return 0;
}