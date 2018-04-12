#include <stdio.h>
//#include "funciones.h"



void mostrarVector(int vec[], int tamanio);
int funMax(int vector[],int tam);
void modificarVector(int vec[]);
void mostrarVector(int vec[], int tamanio)
{
    int i;
     for(i=0; i<tamanio; i++)
    {
        printf("%d -- %d\n",i,vec[i]);//al ag"&" se muestra la direccion de memoria
    }
}
int funMax(int vector[],int tam)
{
    int i;
    int max;
    int flag=0;
    for(i=0;i<tam;i++)
    {
        if (flag==0||vector[i]>max)
        {
            max=vector[i];
            flag=1;
        }
    }

    return max;
}
void modificarVector(int vec[])
{
    vec[3]=900;
}
