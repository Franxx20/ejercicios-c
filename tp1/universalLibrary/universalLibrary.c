#include "universalLibrary.h"
#include <ctype.h>
#include <stdio.h>

booleano continuar(char *mensaje)
{


    puts(mensaje);          // muestra el mensaje recibido por *mensaje
    fflush(stdin);  // limpia el buffer del teclado
    char respuesta = scanf("%c",&respuesta);

    respuesta = tolower(respuesta);     // tolower es una funcion de la bibioteca ctype.h que pasa un char a minuscula

    while(respuesta != 's'  && respuesta != 'n')        // si la respuesta es s o n no entra al ciclo
    {
        puts("Respuesta invalida de nuevo.\n");
        puts("Debe ingresar s o n:");
        fflush(stdin);
        scanf("%c",&respuesta);
        respuesta = tolower(respuesta);
    }

    return respuesta == 's';            // devuelve el resultado tipo boolean
}
