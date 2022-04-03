#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int num;
  printf("---------DETERMINAR SI EL NUMERO PERTECENE A LA SERIE DE "
         "FIBONACCI-----------");

  printf("\n Ingrese un numero: ");
  scanf("%d", &num);
  int resultado = esFibonacci(num);
  printf("El resultado es: %d", resultado);
  return 0;
}

int esFibonacci(int num) {

  int num1 = 1;
  int num2 = 1;
  int num3 = 0;
  while (num3 < num) {

    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
  }
  if (num3 == num)
    return 1;
  else
    return 0;
}
