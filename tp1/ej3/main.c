#include <stdio.h>
#include <stdlib.h>
#include"exponencialEuler.h"
int main()
{
    float exponencialNatural=0;
    float tolerancia = 0.05;
    int x = 3;
    exponencialNatural = exponencialNatural();
    return 0;
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
