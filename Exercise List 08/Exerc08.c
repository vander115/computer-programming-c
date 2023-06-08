#include <stdio.h>
#include <math.h>

// Autor: José Vanderlei Furtuna Tomé - 554397

typedef struct
{
  float x;
  float y;
} ponto;

float calcularDistancia(ponto ponto)
{
  float distancia = sqrt(ponto.x * ponto.x + ponto.y * ponto.y);

  return distancia;
}

int main()
{
  ponto pt01;

  printf("Digite um ponto do plano cartesiano: \n");
  printf("Coordenada X: ");
  scanf("%f", &pt01.x);
  printf("Coordenada Y: ");
  scanf("%f", &pt01.y);

  printf("A distancia entre o ponto e a origem e: %.3f", calcularDistancia(pt01));
}