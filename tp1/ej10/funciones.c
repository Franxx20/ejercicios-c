#include <stdio.h>
#include "libreria.h"

int validarNumeroNatural()      //funcion que valida si un numero es natural o no
{
    int x;
    do
    {
        printf("Ingrese el numero natural:");
        scanf("%d",&x);
    } while (x<=0);              //si es menor o igual a cero vuelve a pedir el valor
    return x;
}


void sumaPrimerosNumerosN(int *num ,int *sum)   //suma de los primeros numeros N naturales
{
    int i;
    *num = validarNumeroNatural();
    for ( i = 2; i <= *num ; i++ )      // arranca el ciclo en 2 y va hasta el contenido que apunta el puntero *num
        *sum += i;                      // suma y guarda el resultado en la direccion donde apunta el puntero *sum
}
