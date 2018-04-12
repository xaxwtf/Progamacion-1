#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
#define TAM 5//no precisa esfuerzo del procesador
//un vector es una variable por referencia
//Tarea buscar numeros pares dentro de la raid de enteros
// buscar una funcion que busque los nuemeros positivos
//char
int main()
{
    //int const T=5;//ocupa lugar en memoria
    int vector[TAM];//= {9,-3,5,14,-4}//solo se puede hacer al momento de declarar la variable
    //int vector[5]={} si quiero inicializar el vector en 0 dejo la llaves vacias
    int i;
    int max;
    //printf("%d\n",&vector); apunta la la 1er elemento del vector
    for(i=0;i<TAM;i++)//para iniciar un vector con todos los valores iguales diferente de 0 se utiliza un for con esta estructura
    {
        vector[i]=0;
    }
    /*carga secuencial*/

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese Un Numero: ");
        scanf("%d",&vector[i]);
    }
    mostrarVector(vector,TAM);//llamada de funcion
    modificarVector(vector);
    max= funMax(vector,TAM);
    printf("El Numero Maximo es: %d",max);



    return 0;
}

