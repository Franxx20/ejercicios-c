#include <stdio.h>
#include <stdlib.h>
#include "../Vector/Vector.h"
int main()
{
    Vector vector;

    crearVector(&vector);

    if (insertarEnVectorAlFinal(&vector, 20))
        printf("Se pudo insertar el valor %d en el vector\n", 20);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 20);
    if (insertarEnVectorAlFinal(&vector, 40))
        printf("Se pudo insertar el valor %d en el vector\n", 40);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 40);
    if (insertarEnVectorAlFinal(&vector, 100))
        printf("Se pudo insertar el valor %d en el vector\n", 100);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 100);
            if (insertarEnVectorAlFinal(&vector, 300))
        printf("Se pudo insertar el valor %d en el vector\n", 300);
    else
        printf("No se pudo insertar el valor %d en el vector\n", 300);
    mostrarVector(&vector);

    if(eliminarDeVectorPorPosicion(&vector,1))
    {
        printf("Se pudo insertar el valor %d en el vector\n", vector.vec[0]);
    }
    else
        printf("Tristeza nao tem fin");

    mostrarVector(&vector);
    return 0;
}
