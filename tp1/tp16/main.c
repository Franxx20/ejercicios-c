#include <stdio.h>
#include <stdlib.h>
#include "sumarDias.h"

int main()
{
    /* Desarrollar una función que a partir de una fecha obtenga la correspondiente al
         día siguiente.*/
    tFecha fecha;
    int aSumar;


    printf("Digite una fecha (dd mm anio): ");
    scanf("%d %d %d", &fecha.dia,&fecha.mes,&fecha.anio);
    printf("Digite la cantidad de dias a sumar: ");
    scanf("%d", &aSumar);
    for (int i = 0; i < aSumar ; i++ )
    {
        if(sumarDia(&fecha))
        {
            puts("la fecha es valida");
            printf("El fecha siguiente es: %d %d %d \n",fecha.dia,fecha.mes,fecha.anio);
        }
        else
            puts("Fecha es invalida");

    }


    return 0;
}
/** \brief salta al dia siguiente de la fecha colocada
 *
 * \param fecha tFecha*
 * \return int
 *
 */
int sumarDia(tFecha *fecha)

{

    int anio_base = 1601;
    int esValido = 0;
    int ldia = fecha->dia;
    int lmes = fecha->mes;
    int lanio = fecha->anio;
    if (lmes >= 1 && lmes <= 12 && lanio>=anio_base)
    {
        switch (lmes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (ldia >= 1 && ldia <= 31)
            {
                esValido = 1;


                if(ldia == 31 && lmes == 12)
                {
                    fecha->dia= 1;
                    fecha->mes= 1;
                    fecha->anio+=1;
                }
                else if(ldia==31 && lmes <12)
                {
                    fecha->dia=1;
                    fecha->mes+=1;
                }
                else
                {
                    fecha->dia+=1;
                }
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (ldia >= 1 && ldia <= 30)
            {
                esValido = 1;
                if(ldia == 30)
                {
                    fecha->dia = 1;
                    fecha->mes+=1;

                }
                else
                {
                    fecha->dia+=1;
                }
            }
            break;
        case 2:
            if ((lanio % 4 == 0 && lanio % 100 != 0) || lanio % 400 == 0)
            {
                if (ldia >= 1 && ldia <= 29)
                {
                    esValido = 1;
                    if(ldia == 29)
                    {
                        fecha->mes+=1;
                        fecha->dia = 1;
                    }
                    else
                        fecha->dia+=1;
                }

            }
            else if (ldia >= 1 && ldia <= 28)
            {
                esValido = 1;

                if(ldia ==28)
                {
                    fecha->mes+=1;
                    fecha->dia =1;
                }
                else
                    fecha->dia+=1;
            }
            break;
        }
    }
    return esValido;

}
