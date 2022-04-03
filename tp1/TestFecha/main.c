#include <stdio.h>
#include <stdlib.h>
#include "../Fechas/Fechas.h"

booleano continuar(char * mensaje);
int main()
{
    Fecha fecha;


    do
    {
        printf("Ingrese una fecha (dd mm aaaa): ");
        scanf("%d %d %d", &fecha.dia, &fecha.mes,&fecha.anio);
        if(esFechaValida(fecha))
            printf("La fecha ingresada es valida. \n");
        else
            printf("La fecha ingresada no es valida. \n");
    }
    while (continuar("Desea ingresar otra fecha? (s/n):"));

    return 0;
}

booleano continuar(char* mensaje)
{
    char respuesta;

    puts(mensaje);
    fflush(stdin);
    scanf("%c", &respuesta);
    respuesta = tolower(respuesta);
    while(respuesta != 's' && respuesta != 'n')
    {
        puts("Respuesta invalida. \n");
        puts("Debe ingresar s o n.");
           fflush(stdin);
        scanf("%c", &respuesta);
        respuesta = tolower(respuesta);
    }
    return respuesta == 's';
}
