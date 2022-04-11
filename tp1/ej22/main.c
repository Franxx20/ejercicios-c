#include <stdio.h>
#include <stdlib.h>
#include "../Vector/Vector.h"
int main()
{
    Vector vector;

    crearVector(&vector);

    if (insertarEnVectorAlFinal(&vector, 78))
        printf("Se pudo insertar el valor %d en el vector\n", 78);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 78);
    if (insertarEnVectorAlFinal(&vector, 100))
        printf("Se pudo insertar el valor %d en el vector\n", 100);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 100);
    if (insertarEnVectorAlFinal(&vector, 200))
        printf("Se pudo insertar el valor %d en el vector\n", 200);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 200);
    mostrarVector(&vector);

    if(insertarPorPosicion(&vector,2,50))
    {
        printf("Se pudo insertar el valor %d en el vector\n", vector.vec[0]);
    }
    else
        printf("Tristeza nao tem fin");

    mostrarVector(&vector);
    return 0;
}
