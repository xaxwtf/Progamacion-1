#include <stdio.h>
#include "funciones.h"
float obtenerPromedio(int num1,int num2,int contNotas)
{
    float prom;
    prom= (float)(num1+num2)/contNotas;
    return prom;
}
void mostrarDatos(char nombres[][30],int leg[],int not1[],int not2[],float prom[],int cantRep)
{
    int i;
    for(i=0;i<cantRep;i++)
    {
        printf("%s       %d   %d   %d   %.2f\n",nombres[i],leg[i],not1[i],not2[i],prom[i]);
    }
}
