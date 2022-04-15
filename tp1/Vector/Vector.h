#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include "../comun/comun.h"
#define CAPACIDAD_VECTOR 10

typedef struct
{
    int vec[CAPACIDAD_VECTOR];
    int ce;
} Vector;

void crearVector(Vector *vector);
booleano insertarEnVectorAlFinal(Vector *vec, int valor);
int insertarEnVectorEnOrdenCDup(Vector * vector, int valor);
int buscarEnVectorOrdenado(const Vector* vector, int valor);
booleano eliminarDeVectorPorValor(Vector * vector,int valor);
void mostrarVector(const Vector* vec);
booleano insertarPorPosicion(Vector *vector, int pos, int num);
booleano insertarPorPosicionOrdenado(Vector *vector, int num);
booleano eliminarDeVectorPorPosicion(Vector *vector,int pos);
int buscarEnVectorOrdenado(const Vector *vector,int valor);
int buscarEnVectorDesordenado(const Vector *vector, int valor);
booleano eliminarDeVectorPrimerAparicion(Vector *vector,int num);
booleano eliminarDeVectorTodaAparicion(Vector *vector,int num);
booleano eliminarDeVectorDesPorNValor(Vector vector, int valor)
#endif // VECTOR_H_INCLUDED
