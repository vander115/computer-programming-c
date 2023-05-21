#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i = 1, total = 0, s;
  float preco, precoTotal = 0.0, media = 0.0;
  char op;

  printf("Digite a quantidade total de mercadorias: \n");
  scanf("%d", &total);

  do
  {

    printf("Digite o preco de cada mercadoria: \n");

    while (i <= total)
    {

      printf("Mercadoria %d: ", i);
      scanf("%f", &preco);

      precoTotal += preco;

      i++;
    }

    printf("Deseja adicionar mais mercadorias? (S/N):");
    scanf(" %c", &op);

    if (op == 's' || op == 'S')
    {

      printf("Quantas mercadorias você deseja adicionar? ");
      scanf("%d", &s);
      total += s;
    }

  } while (op == 's' || op == 'S');

  media = precoTotal / total;

  printf("O total de preco em estoque e R$%.2f\nA media de precos e R$%.2f", precoTotal, media);

  return 0;
}