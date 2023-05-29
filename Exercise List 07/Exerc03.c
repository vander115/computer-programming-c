#include <stdio.h>
#include <string.h>

int main()
{
  int i, lenght;
  char word[50];

  printf("Digite algo: ");
  scanf("%[^\n]s", &word);

  for (i = 0; word[i] != '\0'; i++)
  {
    lenght++;
  }

  printf("O tamanho da string e: %d", lenght);

  return 0;
}