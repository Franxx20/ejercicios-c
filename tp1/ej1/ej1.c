#include "factorial.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("-------CALCULAR FACTORIAL---------\n");
  printf("ingrese un numero: ");
  scanf("%d", &num);
  int fact = factorial(num);
  printf("El factorial de %d es %d", num, fact);
  return 0;
}

int factorial(int num) {
  int fact = 1;
  for (int i = 2; i <= num; i++) {
    fact *= i;
  }
  return fact;
}
