#include <stdio.h>

int main()
{

  int i = 1, total = 0;
  float preco, precoTotal = 0.0, media = 0.0;

  printf("Digite a quantidade total de mercadorias: \n");
  scanf("%d", &total);

  printf("Digite o preco de cada mercadoria: \n");

  while (i <= total)
  {
    printf("Mercadoria %d: ", i);
    scanf("%f", &preco);

    precoTotal += preco;

    i++;
  }

  media = precoTotal / total;

  printf("O total de preco em estoque e R$%.2f\nA media de precos e R$%.2f", precoTotal, media);

  return 0;
}