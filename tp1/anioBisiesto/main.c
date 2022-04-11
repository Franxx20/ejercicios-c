#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int esValido = valFecha(28, 2, 2000);
  if (esValido == 0) {
    printf("la fecha no es valida: %d", esValido);
  } else {
    printf("la fecha es valida: %d", esValido);
  }
  return 0;
}

int valFecha(int dia, int mes, int anio) {
  // Precondicion: Se han de recibir 3 parametros, todos enteros.
  // Poscondicion: se devolvera un 0 falso o 1 verdadero

  int esValido = 0;

  if (mes >= 1 && mes <= 12) {
    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      if (dia >= 1 && dia <= 31) {
        esValido = 1;
      }
      break;

    case 4:
    case 6:
    case 9:
    case 11:
      if (dia >= 1 && dia <= 30) {
        esValido = 1;
      }
      break;
    case 2:
      if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
        if (dia >= 1 && dia <= 29) {
          esValido = 1;
        } else if (dia >= 1 && dia <= 28) {
          esValido = 1;
        }
      }
      break;
    }
  }
  return esValido;
}
