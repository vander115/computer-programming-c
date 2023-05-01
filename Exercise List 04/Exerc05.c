#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float N1, N2;
  char Op;

  printf("Digite um número real: ");
  scanf("%f", &N1);
  
  printf("Digite uma operação (+, -, *, /): ");
  scanf(" %c", &Op);

  printf("Digite outro número real: ");
  scanf("%f", &N2);

  if (Op == '+') {
    printf("Resultado: %.2f\n", N1 + N2);
  } else if (Op == '-') {
    printf("Resultado: %.2f\n", N1 - N2);
  } else if (Op == '*') {
    printf("Resultado: %.2f\n", N1 * N2);
  } else if (Op == '/') {
    printf("Resultado: %.2f\n", N1 / N2);
  } else {
    printf("Operação inválida, tente novamente\n");
  }
  
  return 0;
}
