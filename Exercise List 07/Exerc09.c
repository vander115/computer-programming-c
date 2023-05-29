#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  int i, lenght;
  char word[100], convertedWord[100];

  printf("Digite algo: ");
  scanf("%[^\n]s", &word);

  lenght = strlen(word);

  for (i = 0; word[i] != '\0'; i++)
  {
    printf("%c\n", word[i]);
    convertedWord[i] = toupper(word[i]);
  }
  convertedWord[lenght] = '\0';

  printf("A conversao e: %s", convertedWord);

  return 0;
}