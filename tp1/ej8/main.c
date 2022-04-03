#include<stdio.h>
#include"multi.h"
int main(int argc, char const *argv[])
{
     int num1,num2,resultado;
     //Dados dos números naturales (incluido el cero), obtener su producto por sumas sucesivas.
     printf("Ingrese dos numero enteros: ");
     scanf("%d %d", &num1,&num2);
    resultado = multi(num1,num2);
    printf("La multiplicacion de %d y %d es: %d",num1,num2,resultado);
    return 0;
}

int multi(num1,num2)
{
    int resultado=0;
    for(int i = 0; i<num1; i++){
        resultado+=num2;
    }

    return resultado;
}