#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {1000,1001,1002,1003};
    char nombre[TAM][20]={"Katrian","jose", "ALice","Maria"};
    int nota1[TAM]={7,8,3,5};
    int nota2[TAM]={6,3,4,10};
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(/*??*/);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:

            mostrarAlumnos(/*??*/);
            break;
        case 3:

        case 4:

        case 5:

        break;
        }

    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(legajos[i]=0)
        {
            break;
        }
    }




    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("Indique el Nombre del Alumno: \n")
                fflush(stdin);
                gets(nombres);  //Pedir datos
            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
