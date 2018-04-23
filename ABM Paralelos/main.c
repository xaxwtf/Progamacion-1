#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]={0};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    int j=i+1;
    int aux;
    char buffer[TAM][20];
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n 9. SALIR\n Elija una opcion:\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("No hay lugar \n");
            }
            else
            {
                printf("Alumno ingresado\n");
            }
            break;
        case 2:

            mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
            break;
        case 3:
            printf("Indique el Legajo de los datos a Modificar: \n");
            scanf("%d",&aux);
            if(aux>0&&aux<TAM)
            {
                 for(i=0;i<TAM;i++)
                 {
                     if(aux==legajo[i])
                     {
                         printf("Indique el Nuevo Legajo");
                         scanf("%d",&legajo[i]);
                         printf("Indique el Nuevo Nombre");
                         fflush(stdin);
                         gets(nombre[i]);
                         printf("indique la Nota1");
                         scanf("%d",&nota1[i]);
                         printf("indique la Nota2");
                         scanf("%d",&nota2[i]);
                         promedio[i]=calcularPromedio(nota1[i],nota2[i]);

                         break;
                     }
                 }
            }
            else
            {
                printf("El Legajo no Existe");
            }


        case 4:
            printf("Indique el Legajo de los datos a dar de Baja");
            scanf("%d",&aux);
            if(aux>0&&aux<TAM)
            {
                for(i=0;i<TAM;i++)
                {
                    if(legajo[i]==aux)
                    {
                        legajo[i]=0;
                        strcpy(nombre[i]," ");
                        nota1[i]=0;
                        nota2[i]=0;
                        promedio[i]=0;
                        break;
                    }

                }
            }
            else
            {
                printf("EL Legajo Indicado esta fuera de Rango");
            }
            break;


        case 5:
            for(i=0;i<TAM;i++)
            {
                if(strcmp(nombre[i][i],nombre[j][i])=0)
                    strcpy(buffer[i],nombre[i]);
                    strcpy(nombre[i],nombre[j]);
                    strcpy(nombre[j],buffer[i]);
            }







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
        if(legajos[i]==0)
        {
            index=i;
            break;
        }
    }
    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
    printf("index: %d\n",index);
            if(index!=-1)
            {
                printf("Indique el Nombre del Alumno: \n");
                fflush(stdin);
                gets(nombres[index]);
                printf("Indique el Legajo: \n");
                scanf("%d",&legajos[index]);
                printf("Indique la 1ra Nota: \n");
                scanf("%d",&nota1[index]);
                printf("Indique la 2da Nota: \n");
                scanf("%d",&nota2[index]);
                promedio[index]=calcularPromedio(nota1[index],nota2[index]);
                  //Pedir datos
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
    printf("Legajo  Nombre  nota1 nota2 promedio indice\n");
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d    %s    %d    %d   %.2f      %d\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i], i);
                }

            }

}
