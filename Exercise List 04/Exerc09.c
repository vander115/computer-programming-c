#include <stdio.h>

// Autor: José Vanderlei Furtuna Tomé - EC 1S

int main()
{
  float a, b, c;

  printf("Digite o valor de a: ");
  scanf("%f", &a);

  printf("Digite o valor de b: ");
  scanf("%f", &b);

  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if (a + b > c && a + c > b && b + c > a) {
    printf("Os valores %.2f, %.2f e %.2f formam um triângulo\n", a, b, c);

    if (a == b && b == c) {
      printf("O triângulo é equilátero\n");
    } else if (a == b || b == c || a == c) {
      printf("O triângulo é isósceles\n");
    } else {
      printf("O triângulo é escaleno\n");
    }
  } else {
    printf("Os valores %.2f, %.2f e %.2f não formam um triângulo\n", a, b, c);
  }

  return 0;
}
