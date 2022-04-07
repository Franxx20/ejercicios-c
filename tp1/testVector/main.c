#include <stdio.h>
#include <stdlib.h>
#include "../Vector/Vector.h"
int main()
{
    Vector vector; // reservo espacio para toda la estructura
   /* Vector *vector;*/ // reservo espacio solo para el puntero
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

    if(eliminarDeVectorPorValor(&vector,200))
    printf("Se elimino el valor %d del vector\n",200);
    else
    printf("No se pudo eliminar el valor %d del vector\n",200);

    mostrarVector(&vector);
    return 0;
}
