#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float S;

  printf("Digite o salário em R$: ");
  scanf("%f", &S);

  if(S <= 600.00) {
    S = S * 1.3;
  } else if (S > 600.00 && S <= 1100.00) {
    S = S * 1.25;
  } else if (S > 1100.00 && S <= 2400.00) {
    S = S * 1.2;
  } else if (S > 2400.00 && S <= 3550.00) {
    S = S * 1.15;
  } else if (S > 3550.00) {
    S = S * 1.1;
  }
  
  printf("Novo salario: R$ %.2f\n", S);

  return 0;
}
