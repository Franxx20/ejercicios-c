#include "Fechas.h"
#include <stdio.h>
#include <stdlib.h>
//#define esBisiesto(anio) ((anio)%4 == 0 && (anio) % 100 != 0) || (anio) % 400 == 0)
int cantDiasMes(int mes, int anio);
booleano esFechaValida(Fecha fecha)
{
    if (fecha.anio >= ANIO_BASE)
    {

        if (fecha.mes >= 1 && fecha.mes <= 12)
        {

            if (fecha.dia >= 1 && fecha.dia <= cantDiasMes(fecha.mes,fecha.anio))
                return VERDADERO;
        }


    }
    return FALSO;

}
int cantDiasMes(int mes, int anio)
{
    int cmd[] = {0,31,28,31,30,31,31,30,31,30,31};

    if(mes == 2 && esBisiesto(anio))
        return 29;

    return cmd[mes];
}

int esBisiesto(int anio)
{
    return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
}

