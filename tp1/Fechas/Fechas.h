#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED
#define ANIO_BASE 1601
//#define VERDADERO 1
//#define FALSO 0

typedef enum
{
    FALSO, VERDADERO
} booleano;

typedef struct
{
    int dia;
    int mes;
    int anio;
} Fecha;
booleano esFechaValida(Fecha);


#endif // FECHAS_H_INCLUDED
