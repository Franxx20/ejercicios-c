#include "Matrices.h"

float sumaDiagonalSuperior(float mat[][CAPACIDAD_COLUMNAS])
{
    float valor=0;
    int i,j;
    for (i = 0; i<CAPACIDAD_FILAS-1 ; i++ )
    {
        for (j=1+i; j<CAPACIDAD_COLUMNAS ; j++ )
            valor+=mat[i][j];
    }

    return valor;

}

float sumaDiagonalInferior(float mat[][CAPACIDAD_COLUMNAS])
{
    float valor = 0;
    int i,j;

    for (j = 0; j<CAPACIDAD_COLUMNAS-1; j++ )
    {
        for (i=j+1; i< CAPACIDAD_FILAS; i++ )
            valor+=mat[i][j];
    }
    return valor;
}

void mostrarMatriz(int mat [][CAPACIDAD_COLUMNAS]){

    int i,j;

    for (i = 0;i<CAPACIDAD_FILAS ;i++ )
    {
        for (j=0;j<CAPACIDAD_COLUMNAS ;j++ )
        {
            printf("%d ");
        }
        printf("\n");
    }
}
