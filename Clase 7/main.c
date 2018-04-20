#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"funciones.h"
//#define T=3
int buscarDato(int[],char[]);
int main()
{
    int legajos[3];
    char nombres[3][30];
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("indique el Nombre del Alumno: \n");+
        fflush(stdin);
        gets(nombres[i]);
        printf("Indique el Legajo:\n");
        scanf("%d",&legajos[i]);
        printf("Indique El Resultado de la 1ra Nota: \n");
        scanf("%d",&nota1[i]);
        printf("Indique El Resultado de la 2da Nota: \n");
        scanf("%d",&nota2[i]);
        promedio[i]=obtenerPromedio(nota1[i],nota2[i],2);
    }
    mostrarDatos(nombres,legajos,nota1,nota2, promedio,3);

}
int buscarDato(int vetor[],char mensaje[])
{
    int resultado;
    int dato;
    printf(mensaje);
    scanf("%d",dato);
    resultado=strcmp(vector,dato);
}
