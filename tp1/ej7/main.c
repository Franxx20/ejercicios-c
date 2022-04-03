#include "naturales.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int num;
  printf("-------CLASIFICAR NUMEROS NATURALES---------\n");
  printf("INGRESE UN NUMERO: ");
  scanf("%d", &num);
  int resultado = clasifNaturales(num);
  printf("El resultado es : %d", resultado);
  return 0;
}

int clasifNaturales(int numero) {
  int suma=0;
  int i = 0;
    for ( i = 1; i < numero; i++) {
    if (numero % i == 0) {
      suma += i;
    }
  
  }

  printf("suma: %d\n", suma);
  if (suma == numero) {
    return 0;
  } else if (suma < numero) {
    return -1;
  }
  else
    return 1;

}
