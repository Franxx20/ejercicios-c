#include "Fechas.h"
#include "../universalLibrary/universalLibrary.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define esBisiesto(anio)                                                       \
  (((anio) % 4 == 0 && (anio) % 100 != 0) || (anio) % 400 == 0)
#define decrementarAnio(mes) (((mes) == 12? 1 : 0))
int cantDiasMes(int mes, int anio);

booleano esFechaValida(Fecha fecha)
{
    if (fecha.anio >= ANIO_BASE)
    {
        if (fecha.mes >= 1 && fecha.mes <= 12)
        {
            if (fecha.dia >= 1 && fecha.dia <= cantDiasMes(fecha.mes, fecha.anio))
                return VERDADERO;
        }
    }
    return FALSO;
}
int cantDiasMes(int mes, int anio)
{
    int cmd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && esBisiesto(anio))
        return 29;

    return cmd[mes];
}

void sumarDia(Fecha *fecha)
{
    /*int diaMaximo = cantDiasMes(fecha->mes, fecha->anio);
    switch (fecha->mes)
    {
    case 2:
        if (fecha->dia >= 1 && fecha->dia < diaMaximo)
        {
            fecha->dia += 1;
        }
        else if (fecha->dia == diaMaximo)
        {
            fecha->dia = 1;
            fecha->mes += 1;
        }
        break;
    case 12:

        if (fecha->dia >= 1 && fecha->dia < diaMaximo)
        {
            fecha->dia += 1;
        }
        else if (fecha->dia == diaMaximo)
        {
            fecha->dia = 1;
            fecha->mes = 1;
            fecha->anio += 1;
        }
        break;
    default:
        if (fecha->dia >= 1 && fecha->dia < diaMaximo)
        {
            fecha->dia += 1;
        }
        else if (fecha->dia == diaMaximo)
        {
            fecha->dia = 1;
            fecha->mes += 1;
        }

    }
     */

    fecha->dia++;
    if(fecha->dia > cantDiasMes(fecha->mes,fecha->anio))
    {
        fecha->dia=1;
        fecha->anio+= fecha->mes/12;
        fecha->mes= fecha->mes%12 +1;
    }
}

void sumarNdias(Fecha *fecha)
{

    int dias = 0;
    printf("Ingrese el numero de dias a sumar: ");
    scanf("%d", &dias);
    for (int i = 0; i < dias; i++)
    {
        sumarDia(fecha);
    }
}

void restarDia(Fecha *fecha)
{
    int diaMaximo = cantDiasMes(fecha->mes, fecha->anio);
    if (fecha->dia > 1 && fecha->dia <= diaMaximo)
    {
        fecha->dia -= 1;
    }
    else
    {
        switch (fecha->mes)
        {
        case 1:
            if (fecha->dia == 1)
            {
                fecha->mes = 12;
                fecha->anio -= 1;
                fecha->dia = cantDiasMes(fecha->mes, fecha->anio);
            }
            break;
        default:
            if (fecha->dia == 1)
            {
                fecha->mes -= 1;
                fecha->dia = cantDiasMes(fecha->mes, fecha->anio);
            }
        }
    }
}
void restarNdias(Fecha *fecha)
{

    int dia;

    do
    {
        printf("Ingrese la cantidad de dias a restar:");
        scanf("%d",&dia);
    }
    while(dia<=0);

    while(!(fecha->dia == 1 && fecha->mes == 1 && fecha->anio == ANIO_BASE) && (dia>0))
    {
        restarDia(fecha);
        dia--;
    }
    if(dia>0)
    {
        printf("Se llego a la fecha limite %d %d %d, faltaron %d por restar",1,1,1601,dia);
    }
}

int diaSemana(Fecha fecha)
{
    int result1,result2,result3,result4,result5,dia=0;
    result1 = (fecha.anio-1)%7;
    result2 = (fecha.anio-1)/4;
    result3 = (3*(((fecha.anio-1)/100)+1))/4;
    result4 = (result2-result3)%7;
    result5 = fecha.dia%7;
    dia = (result1+result4+result5)%7;
    return dia;
}

void mostrarDia(int dia)
{
    switch(dia)
    {
    case 0:
        printf("Domingo\n");
        break;
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    case 3:
        printf("Miercoles\n");
        break;
    case 4:
        printf("Jueves\n");
        break;
    case 5:
        printf("Viernes\n");
        break;
    case 6:
        printf("Sabado\n");
        break;
    }
}

int difFechas(const Fecha *f1, const Fecha *f2)
{

    int dif = f2 -> dia - f1 -> dia;
    int aAct, mAct;

    for( mAct=f1->mes, aAct=f1->anio; aAct<f2->anio||mAct<f2->mes; aAct+=mAct/12, mAct=(mAct%12)+1)
    {
        dif += cantDiasMes(mAct,aAct);
    }

    return dif;

}

void sumarDiasAFecha(Fecha *f,int cd)
{
    int cmd;
    f->dia+=cd;
    while (f->dia>(cmd=cantDiasMes(f->mes,f->anio)))
    {
        f->dia-=cmd;
        f->anio+=f->mes/12;
        f->mes =f->mes%12+1;
    }
}
void restarNDias2(Fecha *fecha)
{
    int meses[] = {12, 1, 2, 3,4,5, 6, 7, 8, 9, 10, 11};
    int cd;

    do
    {
        printf("Ingrese la cantidad de dias a restar:");
        scanf("%d",&cd);
    }
    while(cd<=0);

    fecha->dia -= cd;                                           //resto lo dias

    while( fecha->dia <= 0)                                     // si los dias son negativos significa que tengo que ir al mes anterior
    {
        fecha->mes = meses[fecha->mes-1];                       // con el mes actual - 1 como indice del vector meses voy al mes anterior
        fecha->anio -= decrementarAnio(fecha->mes);             // macro que pregunta si el mes = 12 si es asi retorna un 1 sino un 0 y esto se le resta al anio
        fecha->dia += cantDiasMes(fecha->mes,fecha->anio);      // se le suma la cantidad de dias del nuevo mes
    }

    if(fecha->anio == 1600)
    {
        fecha->dia = 1;
        fecha->mes = 1;
        fecha->anio = ANIO_BASE;
    }
}
/*
int esBisiesto(int anio)
{
    return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
}
*/
