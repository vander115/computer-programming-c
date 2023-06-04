#include <stdio.h>
#include <string.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

int main()
{
  int i, lenght, amountOfVowels = 0;
  char word[100], character;

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", &word);

  lenght = strlen(word);

  for (i = 0; i < lenght; i++)
  {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
    {
      amountOfVowels++;
    }
  }

  printf("Digite um caracter: ");
  scanf(" %c", &character);

  for (i = 0; i < lenght; i++)
  {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
    {
      word[i] = character;
    }
  }

  printf("%s", word);

  return 0;
}