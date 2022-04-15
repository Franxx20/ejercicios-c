#include <stdio.h>
#include <stdlib.h>
#include "../Matrices/Matrices.h"
//Desarrollar una función para que, dada una matriz cuadrada de reales de orden
//N, obtenga la sumatoria de los elementos que están por encima de la diagonal princi -
//pal (excluida ésta). Lo mismo para la diagonal secundaria. Lo mismo incluyendo la
//diagonal. Lo mismo, con los que están por debajo de la diagonal.

int main()
{
    float valSup,valInf,total;
    float mat[][CAPACIDAD_COLUMNAS] = { {1,2,3},
                                        {4,6,5},
                                        {8,9,10} };

    valSup = sumaDiagonalSuperior(mat);
    valInf = sumaDiagonalInferior(mat);
    total = valSup + valInf;
    printf("SUMA DIAG SUP: %.02f\nSUMA DIAG INF: %.02f\nSUMA TOTAL:%.02f\n",valSup,valInf,total );
    return 0;
}
