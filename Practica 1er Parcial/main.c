#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 100
int main()
{
    int opcion= 12;
    int psLibre;
   //char baffer[50];
    eUsuarios users[TAM];
    iniciarArrayNum(users,TAM,-1);
    do{

        printf("1- ALTA DE USUARIO: \n");
        printf("2- MODIFICAR DATOS DE USUARIO: \n");
        printf("3- BAJA DE USARIO: \n");
        printf("4- PUBLICAR PRODUCTO: \n");
        printf("5- MODIFICAR PUBLICACION: \n");
        printf("6- CANCELAR PUBLICACION: \n");
        printf("7- COMPRAR PRODUCTO: \n");
        printf("8- LISTAR PUBLICACIONES DE USUARIO: \n");
        printf("9- LISTAR PUBLICACIONES: \n");
        printf("10- LISTAR USUARIOS: \n");
        printf("11 - SALIR  \n");
        fflush(stdin);
        opcion=solicitarInt("indique una Opcion: ");


        switch(opcion)
        {
            case 1:
                psLibre=buscarDato(users,TAM,-1);
                if(psLibre==-1)
                {
                    printf("El Servidos ha ALcanzado el Maximo de Usuarios \n");
                }
                else
                {
                    pedirCadena("indique su Nombre",users[psLibre].nombre);
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;

            case 5:

            case 6:

            case 7:

            case 8:

            case 9:

            case 10:
                mostrarDatos(users,TAM);
                break;

        }

    }
    while(opcion!=11);
    return 0;
}

