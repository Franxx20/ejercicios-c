#include <stdio.h>
#include <stdlib.h>
#define COL 5
#define FIL 5
#define TAM 10
#define ORD 6
#include "FuncionMatri.h"
int main()
{/*
    int mat0[3][3]={{1,2,3},{4,6,5},{8,9,10}};
    int mat1[3][TAM]={{5,6,4.5},{5,9,7,8},{12,10,12,16}};
    int mat2[][TAM]={{5,4,8,1},{10,6,7,3},{15,78,95,2},{10,50,6,4}};                                                    //SE PUEDE PONER LA MATRIZ SIN PÓNER LA CANTIDAD DE FILAS PERO SI TIENE QUE ESTAR LA CANTIDAD DE COLUMNAS ESO SE TIENE QUE PONER SIEMPRE
    char mat4[][20]={"Hola Mundo", "Hello world","Bounjour"};

    printf("\n\n\%d\n\n",mat0[1][1]);
    printf("\n\n\%s\n\n",mat4[2]);
    printf("\n\n\%c\n\n",mat4[2][3]);

*/

    int mat[FIL][COL]={{1,3,5,4,7},{55,06,7,1,9},{8,6,1,7,9},{5,0,6,3,2},{10,25,56,10,91}},suma=0;
    //MatriDiagonDP(mat,FIL);
    MostrarDP(mat,FIL);
    MatriDiagg(mat,FIL,COL);
    MostrarMatri(mat,FIL,COL);
    DebajoDiagPri(mat,FIL,COL);
    SuperiorDiagPri(mat,FIL,COL);
    suma=SumatoriaencimaElementosDiag(mat,FIL,COL);
    printf("\n La sumatoria es:%d",suma);
   /* MuestraVec(mat,tam); ///Muestra la fila comop si fuese vectores searados
    MostrarMatriz(mat,tam);

    MatrizDiagSec(mat,FIL,COL);
   */
   return 0;
}
