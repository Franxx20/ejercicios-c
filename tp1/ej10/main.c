#include <stdio.h>
#include <stdlib.h>
#include"libreria.h"

/*Construir un programa que lea un número natural N y calcule la suma de los primeros N números naturales.*/

int main()
{
    int numero,resultadoSuma=1;
    sumaPrimerosNumerosN(&numero,&resultadoSuma);       //mando las direcciones de NUMERO y RESULTADOSUMA
    printf("\nEl resultado de la suma de los primeros %d numeros naturales es:%d\n",numero,resultadoSuma);
    return 0;
}
