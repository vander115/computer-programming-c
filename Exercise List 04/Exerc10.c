#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float N1, P1, N2, P2, Media;

  printf("Digite a primeira nota: ");
  scanf("%f", &N1);
  
  printf("Digite o peso da primeira nota: ");
  scanf("%f", &P1);

  printf("Digite a segunda nota: ");
  scanf("%f", &N2);

  printf("Digite o peso da segunda nota: ");
  scanf("%f", &P2);

  Media = ((N1 * P1) + (N2 * P2)) / (P1 + P2);

  if (Media >= 7.0) {
    printf("Aprovado\n");
  } else if (Media >= 4.0 && Media < 7.0) {
    printf("Final\n");
  } else {
    printf("Reprovado\n");
  }

  printf("Média: %.2f\n", Media);

  return 0;
}
