#include <stdio.h>
#include "matematicas.h"

double factorial(int numero)                // funcion que calcula el factorial de un numero recibiendolo como argumento
{
    double fact = 1;                        // donde se guarda el valor del factorial calculado
    int i;                                  // indice del ciclo for

    for( i=2 ; i<=numero ; i++)             // empieza en i=2 y por ciclo multiplica fact por el indice i guardando el resultado en fact hasta que i sea igual al numero
    {
        // que se le quiere calcular el factorial
        fact *= i;
    }
    return fact;
}

int validarNumerosParaCombinatoria(int m,int n)
{
    if( m>=0&&m>=n)                     // si retorna 1 M y N son validos sino no lo son
        return 1;
    else
        return 0;
}

int combinatoria(int m,int n)       // funcion que calcula la combinatoria
{
    return factorial(m)/(factorial(n)*factorial(m-n));
}

int esNumeroFibonacci(int numero)
{
    int fibonacci1=1,fibonacci2=1,resulFibonacci=0;

    while( resulFibonacci < numero)
    {
        resulFibonacci = fibonacci1 + fibonacci2;
        fibonacci2 = fibonacci1;
        fibonacci1 = resulFibonacci;
    }

    if( resulFibonacci == fibonacci1 )
        return 1;
    else
        return 0;
}

int validarNumeroNaturalSinCero()
{
    int x;
    do
    {
        printf("Ingrese un numero natural:");
        scanf("%d",&x);
    }
    while (x<=0);
    return x;
}

void esPerfectoDeficienteOAbundante(int numero)
{
    int i,sumadorDiv=1;                         // i = indice del ciclo for , sumadorDiv = sumador de los divisores positivos

    for( i=2 ; i<=numero/2 ; i++)               // como el 1 es divisor de todos los numeros arranco el ciclo en i=2 y sumadorDiv=1
    {
        if(numero%i==0)
        {
            sumadorDiv += i;
        }
    }

    if(numero == sumadorDiv)
    {
        printf("\nEl numero ingresado es Perfecto\n");
    }
    else if(numero > sumadorDiv)
    {
        printf("\nEl numero ingresado es Deficiente\n");
    }
    else
    {
        printf("\nEl numero ingresado es Abundante\n");
    }
}

int validarNumeroNaturalConCero()
{
    int x;
    do
    {
        printf("Ingrese un numero natural:");
        scanf("%d",&x);
    }
    while (x<0);
    return x;
}

int multiplicacionPorSumasSucesivas(int factor1,int factor2)
{
    int resultado=0;

    while(factor2>0)
    {
        resultado += factor1;
        factor2--;
    }
    return resultado;
}


int esNumeroPrimo(int *numero)
{
    int i,cantDiv=0;
    *numero = validarNumeroNaturalSinCero();
    for (  i = 2; i <= *numero ; i++)
    {
        if(*numero%i==0)
            cantDiv++;
    }

    if(cantDiv==1)
        return 1;
    else
        return 0;

}

int esNumeroImpar(int numero)
{
    return numero%2;
}

int multRusa(int num1,int num2)
{
    int total=0;
    while (num1!=0)
    {
        printf("num1 :%d\n",num1);

        if(esNumeroImpar(num1))
        {
            total+=num2;
            printf("total:%d \n", total);
        }
        num1/=2;
        num2*=2;
    }

    return total;
}

