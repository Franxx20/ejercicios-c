#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED
#define ANIO_BASE 1601
#include "../universalLibrary/universalLibrary.h"
typedef struct
{
    int dia,mes,anio;
} Fecha;
booleano esFechaValida(Fecha);
void sumarDia(Fecha *);
void sumarNdias(Fecha *);

void restarDia(Fecha *);
void restarNdias(Fecha *);
int esBisiesto(Fecha *);
int diaSemana(Fecha);
void mostrarDia(int);
int difFechas(const Fecha *, const Fecha *);
void sumarDiasAFecha(Fecha *, int );
void restarNdias2(Fecha *fecha);
#endif // FECHAS_H_INCLUDED
