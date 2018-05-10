#include <stdio.h>
#include "funciones.h"
#include "funciones2.h"
int ingrInt(char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("%d",&aux);
    return aux;

}
void solCadena(char mensaje[],char dato[])
{
    char aux[264];
    printf(mensaje);
    fflush(stdin);
    gets(aux);
    strcpy(dato,aux);
}
void inizArray(eUsuarios vector[],int tam,int valor)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vector[i].id=valor;
        strcpy(vector[i].nomUsuario," ");
        strcpy(vector[i].password," ");

    }
}
int busPrimeraOcurrencia(eUsuarios vector[],int tam, int valor)
{
    int i;
    int index=-1;
    for(i=0;i<tam;i++)
    {
        if(vector[i].id==valor)
        {
           return i;
        }
    }
    return index;
}
void mostrarDatosCarg(eUsuarios estr[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(estr[i].id!=-1)
        {
            printf("%d   %d      %s \n",i,estr[i].id, estr[i].nomUsuario);
        }
    }
}
