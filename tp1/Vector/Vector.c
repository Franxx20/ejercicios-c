#include "Vector.h"
#include <stdio.h>

void crearVector(Vector *vector)
{
    vector->ce = 0;
}

booleano insertarEnVectorAlFinal(Vector *vec, int valor)
{
    if (vec->ce == CAPACIDAD_VECTOR)
        return FALSO;

    vec->vec[vec->ce] = valor;
    (vec->ce)++; // Incrementa la cantidad de elementos en uno. es necesario el * para poder acceder al dato.
    return VERDADERO;
}

int insertarEnVectorEnOrdenCDup(Vector *vector, int valor)
{
    if (vector->ce == CAPACIDAD_VECTOR)
        return SIN_MEM;
    int i = vector->ce - 1;

    while (i > 0 && valor < vector->vec[i])
    {
        vector->vec[i + 1] = vector->vec[i];
        i--;
    }
    vector->vec[i + 1] = valor;
    vector->ce++;

    return TODO_OK;
}
int buscarEnVectorOrdenado(const Vector *vector, int valor)
{
    int i = 0;
    while (i < vector->ce && valor > vector->vec[i])
        i++;

    if (i == vector->ce || valor < vector->vec[i])
        return -1;

    return i;
}
int buscarEnVectorDesordenado(const Vector *vector, int valor)
{
    int i = 0;
    while (i<vector->ce && valor != vector->vec[i])
        i++;
    if(i == vector->ce)
        return -1;
    return i;

}
booleano eliminarDeVectorPorValor(Vector *vector, int valor)
{
    int posElim = buscarEnVectorDesordenado(vector, valor);

    if (posElim == NO_ENCONTRADO)
        return FALSO;

    int i;
    for (i = posElim; i <= vector->ce - 2; i++)
    {
        vector->vec[i] = vector->vec[i + 1];
    }
    vector->ce--;

    return VERDADERO;
}

void mostrarVector(const Vector *vector)
{
    int i;
    for (i = 0; i < vector->ce; i++)
        printf("%d ", vector->vec[i]);

    printf("\n");
}

booleano insertarPorPosicion(Vector *vector, int pos, int num)
{
    int i;
    if(pos==NO_ENCONTRADO || vector->ce < pos || pos<0)
        return FALSO;
    for(i = vector->ce; i>pos; i--)
        vector->vec[i] = vector->vec[i-1];


    vector->vec[pos] = num;
    vector->ce+=1;

    return VERDADERO;
}
booleano insertarPorPosicionOrdenado(Vector *vector,int num)
{
    int i= vector->ce;

    if(vector->ce > CAPACIDAD_VECTOR)
        return FALSO;

    printf("num %d\n",num);

    while(vector->vec[i-1]>num )
    {
        printf("pos %d valor %d || pos  %d valor %d\n",i,vector->vec[i],(i-1),vector->vec[i-1]);

        vector->vec[i] = vector->vec[i-1];
        i--;
    }

    vector->vec[i] = num;
    vector->ce+=1;

    return VERDADERO;

}
booleano eliminarDeVectorPorPosicion(Vector *vector,int pos)
{

    int i;
    if(vector->ce-1 < pos || pos < 0 )
        return FALSO;
    for(i = pos; i<=vector->ce-2; i++)
    {
        vector->vec[i] = vector->vec[i + 1];
    }
    vector->ce--;

    return VERDADERO;
}
int buscarEnVector(const Vector *vector,int num)
{
    for (int i = 0; i<vector->ce ; i++)
    {
        if(vector->vec[i] == num)
            return i;
    }
    return -1;
}
booleano eliminarDeVectorPrimerAparicion(Vector *vector,int num)
{
    int i,posElim=buscarEnVector(vector,num);
    if(posElim ==-1)
        return FALSO;

    for (i = posElim; i <=vector->ce-2; i++ )
    {
        vector->vec[i] = vector->vec[i+1];
    }
    vector->ce--;


    return VERDADERO;
}
booleano eliminarDeVectorDesPorNValor(Vector vector, int valor)
{
    int posElim = buscarEnVectorDesordenado(vector, valor);

    if(posElim == NO_ENCONTRADO)
        return FALSO;

    int i = posElim , j = posElim + 1, cant = 1;

    while(i < vector->ce - 1 && j <= vector->ce - 1)
    {
        while(j <= vector->ce - 1 && vector->vec[j] == valor)
        {
            j++;
            cant++;
        }
        vector->vec[i] = vector->vec[j];
        j++;
        i++;
    }

    /
    for(i = posElim; i < vector->ce - 1; i++)
    {
        while(j <= vector->ce - 1 && vector->vec[j] == valor)
        {
            j++;
            cant++;
        }
        vector->vec[i] = vector->vec[j];
        j++;
    }*/

    vector->ce -= cant;

    return VERDADERO;
}

booleano eliminarDeVectorTodaAparicion(Vector *vector,int num)
{

    while (eliminarDeVectorPrimerAparicion(vector,num))
        eliminarDeVectorPrimerAparicion(vector,num);

    return ;
}
