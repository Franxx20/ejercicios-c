#include "combinatoria.h"
#include "factorial.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int num1, num2, resultado;
  printf("-------CALCULO DE NUMERO COMBINATORIO----------. \n");
  printf("Ingrese dos numeros positivos\n");

  printf("Numero 1: ");
  scanf("%d", &num1);

  printf("Numero 2: ");
  scanf("%d", &num2);
  if (num1 > num2 && (num1 >= 0 && num2 >= 0)) {
    resultado = combinatoria(num1, num2);
    printf("El resultado de la combinatoria de %d y %d es: %d", num1, num2,
           resultado);
  } else {
    printf("Datos incorrectos. Vuelta a ingresar datos");
  }
  return 0;
}

int factorial(int num) {
  int fact = 1;
  for (int i = 2; i <= num; i++) {
    fact *= i;
  }
  return fact;
}

int combinatoria(num1, num2) {
  int resultado = factorial(num1) / (factorial(num2) * factorial(num1 - num2));
  return resultado;
}
