#include <stdio.h>  // Biblioteca padrão de entrada e saída de dados
#include <stdlib.h> // Biblioteca padrão de funções do sistema
#include <locale.h> // Biblioteca para usar acentos

typedef enum
{
  TEMPERATURE = 1,
  DISTANCE,
  MASS,
  TIME,
  FORCE,
  VELOCITY,
} conversions;

void menu(int *option)
{
  printf("1 - Temperatura\n2 - Dist�ncia\n3 - Massa\n4 - Tempo\n5 - For�a\n6 - Velocidade\n7 - Sair\n\nSelecione uma op��o: ");
  scanf("%d", option);
}

// Conversão de unidades de tempo

typedef enum
{
  SECONDS = 1,
  MINUTES,
  HOURS,
  DAYS
} time;

float secondsConversions(int seconds, time typeOfResult)
{
  float result;

  switch (typeOfResult)
  {
  case MINUTES:
    result = seconds / 60.0;
    break;
  case HOURS:
    result = seconds / 3600.0;
    break;
  case DAYS:
    result = (seconds / 3600.0) / 24;
    break;
  default:
    result = seconds / 60.0;
    break;
  }

  return result;
}

float minutesConversions(int minutes, time typeOfResult)
{
  float result;

  switch (typeOfResult)
  {
  case SECONDS:
    result = minutes * 60.0;
    break;
  case HOURS:
    result = minutes / 60.0;
    break;
  case DAYS:
    result = (minutes / 60.0) / 24;
    break;
  default:
    result = minutes * 60.0;
    break;
  }

  return result;
}

float hoursConversions(int hours, time typeOfResult)
{
  float result;

  switch (typeOfResult)
  {
  case SECONDS:
    result = hours * 3600.0;
    break;
  case MINUTES:
    result = hours * 60.0;
    break;
  case DAYS:
    result = hours / 24;
    break;
  default:
    result = hours * 3600.0;
    break;
  }

  return result;
}

float daysConversions(int days, time typeOfResult)
{
  float result;

  switch (typeOfResult)
  {
  case SECONDS:
    result = days * 86400.0;
    break;
  case MINUTES:
    result = days * 1440.0;
    break;
  case HOURS:
    result = days * 24;
    break;
  default:
    result = days * 86400.0;
    break;
  }

  return result;
}

// Convers�o de Kilograma-for�a (kgf) para Newtons (N) e vice-versa;

float kilogramForceToNewton(float kgf)
{
  return kgf * 9.80665; // 1 kgf = 9.80665 N
}

float NewtonTokilogramForce(float N)
{
  return N / 9.80665; // 1 N = 0.101972 kgf
}

// Menus

void temperatureMenu(){};
void timeMenu()
{
  int inputUnit, outputUnit;
  float value, result;
  printf("-- UNIDADES DE TEMPO --\n\n");
  do
  {
    printf("Selecione a unidade de tempo que voc� quer converter: \n1 - Segundos\n2 - Minutos\n3 - Horas\n4 - Dias\nOp��o: ");
    scanf("%d", &inputUnit);

    if (inputUnit < 0 || inputUnit > 7)
    {
      system("CLS");
      printf("Digite uma op��o v�lida! Tente novamente: \n");
    }
  } while (inputUnit < 1 || inputUnit > 4);
  system("CLS");
  printf("Unidade de entrada: ");
  switch (inputUnit)
  {
  case SECONDS:
    printf("Segundos\n");
    break;
  case MINUTES:
    printf("Dias\n");
    break;
  case HOURS:
    printf("Horas\n");
    break;
  case DAYS:
    printf("Dias\n");
    break;
  }
  printf("Digite o valor que você quer converter: ");
  scanf("%f", &value);

  printf("\nSelecione a unidade de saida: \n");
  do
  {
    if (inputUnit != SECONDS)
      printf("1 - Segundos\n");
    if (inputUnit != MINUTES)
      printf("2 - Minutos\n");
    if (inputUnit != HOURS)
      printf("3 - Horas\n");
    if (inputUnit != DAYS)
      printf("4 - Dias\n");
    printf("Opção: ");
    scanf("%d", &outputUnit);

    if (outputUnit <= 0 || outputUnit == inputUnit || outputUnit >= 5)
    {
      printf("Digite uma opção valida! Tente novamente: \n");
    }
  } while (outputUnit <= 0 || outputUnit == inputUnit || outputUnit >= 5);

  switch (inputUnit)
  {
  case SECONDS:
    switch (outputUnit)
    {
    case MINUTES:
      result = secondsConversions(value, MINUTES);
      printf("%.2f segundo(s) é igual a %.2f minuto(s)", value, result);
      break;

    case HOURS:
      result = secondsConversions(value, HOURS);
      printf("%.2f segundo(s) é igual a %.2f hora(s)", value, result);
      break;

    case DAYS:
      result = secondsConversions(value, DAYS);
      printf("%.2f segundo(s) é igual a %.2f dias(s)", value, result);
      break;
    }
    break;

  case MINUTES:
    switch (outputUnit)
    {
    case SECONDS:
      result = minutesConversions(value, SECONDS);
      printf("%.2f minuto(s) é igual a %.2f segundo(s)", value, result);
      break;

    case HOURS:
      result = minutesConversions(value, HOURS);
      printf("%.2f minuto(s) é igual a %.2f hora(s)", value, result);
      break;

    case DAYS:
      result = minutesConversions(value, DAYS);
      printf("%.2f minuto(s) é igual a %.2f dias(s)", value, result);
      break;
    }
    break;

  case HOURS:
    switch (outputUnit)
    {
    case SECONDS:
      result = hoursConversions(value, SECONDS);
      printf("%.2f hora(s) é igual a %.2f segundo(s)", value, result);
      break;

    case MINUTES:
      result = hoursConversions(value, MINUTES);
      printf("%.2f hora(s) é igual a %.2f minutos(s)", value, result);
      break;

    case DAYS:
      result = hoursConversions(value, DAYS);
      printf("%.2f hora(s) é igual a %.2f dias(s)", value, result);
      break;
    }
    break;

  case DAYS:
    switch (outputUnit)
    {
    case SECONDS:
      result = daysConversions(value, SECONDS);
      printf("%.2f dia(s) é igual a %.2f segundo(s)", value, result);
      break;

    case MINUTES:
      result = daysConversions(value, MINUTES);
      printf("%.2f dia(s) é igual a %.2f minutos(s)", value, result);
      break;

    case HOURS:
      result = daysConversions(value, HOURS);
      printf("%.2f dia(s) é igual a %.2f horas(s)", value, result);
      break;
    }
    break;
  }
}

void forceMenu()
{
  int option;
  float result, value;

  printf("-- UNIDADES DE FORÇA --\n\n");
  do
  {
    printf("Selecione a convers�o que voc� deseja fazer: \n1 - Kilograma-força(kgf) para Newton(N)\n2 - Newton(N) para Kilograma-força(kgf)\nOpção: ");
    scanf("%d", &option);

    if (option < 1 || option > 2)
    {
      system("CLS");
      printf("Digite uma op��o valida! Tente novamente: \n");
    }
  } while (option < 1 || option > 2);

  printf("Digite o valor que voc� deseja converter: ");
  scanf("%f", &value);

  switch (option)
  {
  case 1:
    result = kilogramForceToNewton(value);
    break;
  case 2:
    result = NewtonTokilogramForce(value);
    break;
  }

  printf("RESULTADO: \n%.3f kilograma-for�a(s) � igual a %f newton(s)", value, result);
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int option;

  printf(" -- CONVERS�O DE UNIDADES --\n\n");

  printf("Bem vindo ao sistema de convers�o de unidades\n");
  printf("Selecione os tipos de unidades que voc� deseja converter: \n");

  do
  {
    menu(&option);
    system("CLS");
    if (option == TIME)
    {
      timeMenu();
    }
    else if (option == FORCE)
    {
      forceMenu();
    }
    else if (option < 0 || option > 7)
    {
      system("CLS");
      printf("Digite uma op��o v�lida e tente novamente: \n");
    }
  } while (option < 0 || option > 7);

  printf("Vanderlei Furtuna");

  return 0;
}
