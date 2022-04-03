#ifndef MATEMATICAS_H_INCLUDED
#define MATEMATICAS_H_INCLUDED

double factorial(int);                      // prototipo de la funcion factorial
int validarNumerosParaCombinatoria(int,int);        // prototipo de la funcion para validar m y n en una combinatoria
int combinatoria(int,int);                          // prototipo de la funcion combinatoria
int esNumeroFibonacci(int);                 // prototipo de la funcion booleana para saber si un numero pertenece a la serie fibonacci
void esPerfectoDeficienteOAbundante(int);   //prototipo de la funcion booleana para saber si un numero es perfecto, deficiente o abundante
int validarNumeroNaturalSinCero();          //prototipo de la funcion para validar un numero natural excluyendo al cero
int validarNumeroNaturalConCero();          //prototipo de la funcion para validar un numero natural incluyendo al cero
int multiplicacionPorSumasSucesivas(int,int);       //prototipo de la funcion para hacer una multiplicacion por sumas sucesivas
int esNumeroPrimo(int *);                     //prototipo de la funcion para saber si es un numero primo


#endif // MATEMATICAS_H_INCLUDED
