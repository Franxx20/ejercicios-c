#include "Cadenas.h"

int miStrlen(const char *cad)
{
    const char *i = cad;
    while (*i != '\0')
    {
        i++;
    }
    return i - cad;
}



char* miStrcpy(char *destino, const char *origen)
{
    char * aux = destino;

    while (*origen)
    {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
    return aux;
}

booleano esPalindromo(const char * pinicial)
{
    int posfinal = miStrlen(pinicial)-1,i;
    char *pfinal  = (char *)pinicial + posfinal;

    for ( i = 0; i<=(posfinal/2) ; i++ )
    {
       // printf("\n inicial:%c final:%c \n",*pinicial,*pfinal);
        if(*pfinal == *pinicial)
        {
            pfinal--;
            pinicial++;
        }
        else if(*pfinal == ' ')
        {
            pfinal--;
        }
        else if(*pinicial == ' ')
        {
            pinicial++;
        }
        else return FALSO;
    }
    return VERDADERO;
}

booleano esPalindromo2(const char* pInicial) //esta permite un solo espacio
{

    char *pFinal = (char *)pInicial + miStrlen(pInicial) - 1;

    while(pInicial <= pFinal &&pFinal == pInicial)
    {
        pFinal--;
        pInicial++;
        if(*pInicial == ' ')
            pInicial++;
        if(*pFinal == ' ')
            pFinal--;
    }

    if(pInicial <= pFinal)
        return FALSO;


    return VERDADERO;
}
int valorNumericoDeUnaCadena(const char *vector)
{
    int valor = 0;

    char *i = (char *) vector;

    while(*i)
    {
        valor += (int) *i;
        i++;
    }

    return valor;
}
