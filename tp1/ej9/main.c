#include "divi.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  // Dados dos números naturales A y B, desarrollar una función para obtener el
  // cociente entero A/B y el resto. (A puede ser 0; B, no).
  int num1,num2;
  int resultado[2]={0};

  printf("Ingrese dos numero enteros: ");
  scanf("%d %d",&num1,&num2);
  if(num2>0){
      divi(num1,num2,resultado);
  printf("El cociente de %d y %d es: %d y el resto es: %d",num1,num2,resultado[0],resultado[1]);
  }
  else{
      return 1;
  }
  return 0;
}

void divi(int num1,int num2,int resultado[2])
{
    resultado[0]=(int)floor(num1/num2);    
    resultado[1]=num1%num2;
}