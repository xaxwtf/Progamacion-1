#include <stdio.h>
#include <stdlib.h>
#define TAM 100
typedef struct{
    int id;
    char nombre[50];
    char nomDUsuario[50];
    char contraseña[50];
    int edad;
}eUsuarios;

int solicitarInt(char[]);
char pedirCadena(char[]);
int buscarLibre(int id[], int tam);
void mostrarDatos(eUsuarios);

int main()
{
    int opcion;
    int ub;
    eUsuarios nombres[TAM];
    eUsuarios nomUser[TAM];
    eUsuarios password[TAM];
    eUsuarios edades[TAM];
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
        printf("0- SALIR  \n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                ub=buscarLibre(eUsuarios.id,TAM);
                if(ib==-1)
                {
                    printf("El Servidos ha ALcanzado el Maximo de Usuarios \n");
                }
                else
                {
                    eUsuarios.edad[ub]=solicitarInt("Indique su Edad: \n");
                    eUsuarios.nombre[ub]=pedirCadena("Indique SU Nombre: \n");
                    eUsuarios.id[ub]=solicitarInt("indique Su ID: \n");
                    eUsuarios.nomDUsuario[ub]=pedirCadena("Indique Su Nombre de Usuario");
                    eUsuarios.contraseña[ub]=pedirCadena("Indique Una Contraseña de al Menos 8 digitos ");
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
                break;

        }

    }
    while(opcion!=0);
    return 0;
}
int solicitarInt(char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("d",&aux);
    return aux;
}
char pedirCadena(char mensaje[])
{
    char aux[165];
    fflush(stdin);
    gets(aux);
    return;
}
int buscarLibre(int id[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(id[i]==0)
        {
            index=i;
            break;
        }
    }
    return index;
}
void mostrarDatos(eUsuarios)
{

}
