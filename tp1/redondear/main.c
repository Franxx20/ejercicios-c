#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float num;
  int redondeado, precision = 0;
  printf("Ingrese un numero flotante: ");
  scanf("%f", &num);
  printf("\nIngrese precision en decimales: ");
  scanf("%d", &precision);
  redondeado = num;
  printf("El numero ingresado es: %.05f y redondeado es: %d", num, redondeado);
  return 0;
}
