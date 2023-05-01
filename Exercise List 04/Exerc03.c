#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float Ap1, Ap2, Media;

  printf("Digite a nota da AP1: ");
  scanf("%f", &Ap1);

  printf("Digite a nota da AP2: ");
  scanf("%f", &Ap2);

  Media = (Ap1 + Ap2) / 2;

  if (Media >= 6) {
    printf("APROVADO\n");
  } else {
    printf("REPROVADO\n");
  }

  printf("Média: %.2f\n", Media);
  
  return 0;
}
