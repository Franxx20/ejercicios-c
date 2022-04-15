#include <stdio.h>
#include <stdlib.h>
#include "../Cadenas/Cadenas.h"
int main()
{
    char cad[]= "anita laba la tina";

    int valor = valorNumericoDeUnaCadena(cad);
    printf("El valor ASCII de la cadena \"%s\" es: %d",cad,valor);

    return 0;
}
