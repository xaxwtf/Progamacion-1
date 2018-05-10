#include <stdio.h>
#include "funciones.h"
void  iniciarArrayNum(eUsuarios vector[],int tam,int inDato)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vector[i].id=inDato;
    }
}
int buscarDato(eUsuarios vector[], int tam, int inDato)
{
    int index=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector[i].id==inDato)
        {
            return i;
        }
    }
    return index;
}
int solicitarInt(char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("d",&aux);
    return aux;
}
void pedirCadena(char mensaje[],char vec[])
{
    fflush(stdin);
    printf(mensaje);
    gets(vec);
}
void mostrarDatos(eUsuarios estrc[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%s    %d ",estrc[i].nomDUsuario,estrc[i].id);
    }
}

