#include <stdio.h>
#include <string.h>
#include "funciones2.h"
#include "funciones.h"
void inizArray2(eproductos vector[],int tam,int valor)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vector[i].idProd=valor;
        strcpy(vector[i].nomProduc," ");
        vector[i].precio=0;
        vector[i].stock=0;
        vector[i].ventas=0;
    }
}
int busPrimeraOcurrencia2(eproductos vector[],int tam, int valor)
{
    int i;
    int index=-1;
    for(i=0;i<tam;i++)
    {
        if(vector[i].idProd==valor)
        {
           return i;
        }
    }
    return index;
}
int busTodasOcurrencias(eproductos vector[],int tam,int dep[], int valor)
{
    int i;
    int j=0;
    int index=-1;
    for(i=0;i<tam;i++)
    {
        if(vector[i].idUsu==valor)
        {
            dep[j]=i;
            j++;
            index=j;
        }
    }
    return index;
}
void mostrarDatosEspcf(eproductos estr[],int tam,int id)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(estr[i].idUsu==id)
        {
            printf("%d   %d      %s      %d      %d    %d \n",i,estr[i].idProd, estr[i].nomProduc,estr[i].precio,estr[i].stock,estr[i].ventas);
        }
    }
}
