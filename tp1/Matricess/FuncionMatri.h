#ifndef FUNCIONMATRI_H_INCLUDED
#define FUNCIONMATRI_H_INCLUDED
#define COL 5
#define TAM 10
void MostrarDP(int mat[][COL],int fil);
int MatriDiagg(int mat[][COL],int fil,int col);
int MostrarMatri(int mat[][COL],int fil,int col);
int DebajoDiagPri(int mat[][COL],int fil,int col);
int SuperiorDiagPri(int mat[][COL],int fil,int col);
int SumatoriaencimaElementosDiag(int mat[][TAM],int fil,int col);
/*
void MuestraVec(int *vec,int ce);
void MuestraMatriz(int mat[][COL],int tam);
int MatriDiagg(int mat[][COL],int fil,int col);
int MatrizDiagSec(int mat[][COL],int fil,int col);
*/#endif // FUNCIONMATRI_H_INCLUDED
