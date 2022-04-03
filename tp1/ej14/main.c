#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
typedef struct{
    int dia,mes,anio;
} tFecha;
int main()
{
    //Desarrollar una función que determine 
    //si una fecha es formalmente correcta.
    int dia,mes,anio;
   
    printf("Digite una fecha (dd mm anio): ");
    scanf("%d %d %d", &dia,&mes,&anio);
    if(fechaCorrecta(dia,mes,anio)){
        puts("la fecha es valida");
    }
    else
    puts("Fecha es invalida");
    return 0;
}
int fechaCorrecta(int dia,int mes,int anio){
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
      if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
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