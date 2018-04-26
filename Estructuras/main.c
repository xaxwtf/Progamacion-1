#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct{
    int legajo;
    char nombre[50];
    float promedio;
}eAlumno;
void mostrarAlumno(eAlumno vector[TAM]);


int main()
{
    eAlumno clase[TAM];
    int i;
    eAlumno miAlumno={1,"juan", 3.25};
    eAlumno otroAlumno;
    otroAlumno.legajo=2;
    strcpy(otroAlumno.nombre,"Maria");
    otroAlumno.promedio=6;
    for(i=0;i<TAM;i++)
    {
        printf("indique el Legajo \n");
        scanf("%d",&clase[i].legajo);
        printf("indique el Nombre \n");
        fflush(stdin);
        gets(clase[i].nombre);
        printf("indique el Promedio\n");
        scanf("%f",&clase[i].promedio);
    }
    mostrarAlumno(clase);
    return 0;
}
void mostrarAlumno(eAlumno vector[TAM])
{
    int i;
    for(i=0;i<TAM;i++)
    {
         printf("%s    %d      %2.f\n",vector[i].nombre,vector[i].legajo,vector[i].promedio);
    }

}
