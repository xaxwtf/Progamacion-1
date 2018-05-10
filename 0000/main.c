#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "funciones2.h"
#define TAM 100
#define PROD 1000
int main()
{
    int opcion=0;
    int subOp=-1;
    eUsuarios users[TAM];
    eproductos mercan[PROD];
    int resBusq;
    char x[50];
    int datoABuscar=0;
    int auxDato;
    int i;
    int depIndices[PROD];
    inizArray(users,TAM,-1);
    inizArray2(mercan,PROD,-1);
    do{
            printf(" 1-ALTA DE USUARIO. \n 2- MODIFICAR DATOS DEL USUARIO. \n 3- BAJA DEL USUARIO. \n 4- PUBLICAR PRODUCTO. \n 5- MODIFICAR PUBLICACION. \n 6- CANCELAR PUBLICACIÓN. \n 7- COMPRAR PRODUCTO. \n 8- LISTAR PUBLICACIONES DE USUARIO. \n 9- LISTAR PUBLICACION.\n 10- LISTAR USUARIOS. \n 11- SALIR. \n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                resBusq=busPrimeraOcurrencia(users,TAM,-1);
                if(resBusq==-1)
                {
                    printf("El Servidor ah alcanzao el maximo de usuarios");
                }
                else
                {
                    users[resBusq].id=ingrInt("indique el ID de Usuario: ");
                    solCadena("Indique el Nombre de Usuario: ",users[resBusq].nomUsuario);
                    solCadena("indiqeu una Contraseña: ",users[resBusq].password);
                }
                break;
            case 2:
                datoABuscar=ingrInt("indique el ID de los datos a Modificar : \n");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                    printf("el ID ingresado No Existe");
                }
                else
                {
                    do{
                        subOp=ingrInt("-Indique el dato a Modificar- \n 1- ID: \n 2- Nombre de Usuario: \n 3- Contrasena \n 4- Cancelar Modificacion. \n");
                        switch(subOp)
                        {
                        case 1:
                            users[resBusq].id=ingrInt("indique el Nuevo ID: ");
                            break;

                        case 2:
                            solCadena("Indique El Nuevo Nombre de Usuario: ",users[resBusq].nomUsuario);
                            break;
                        case 3:
                            solCadena("indique la Nueva Contraseña: ",users[resBusq].password);
                            break;
                        }
                    }while(subOp!=4);
                }
                break;
            case 3:
                datoABuscar=ingrInt("indique el ID de los Datos a Dar de baja");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                    printf("el ID Ingresado No Existe");
                }
                else
                {
                    users[resBusq].id=-1;
                    strcpy(users[resBusq].nomUsuario," ");
                    strcpy(users[resBusq].password," ");
                }


                break;
            case 4:
                datoABuscar=ingrInt("Indique SU ID \n");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                    printf("el ID indicado no Existe!!!!! \n");
                }
                else
                {
                    solCadena("\nIndique su Contrasena: ",x);

                   if(stricmp(x,users[resBusq].password)==0)
                    {
                        auxDato=busPrimeraOcurrencia2(mercan,PROD,-1);
                        if(auxDato==-1)
                        {
                             printf(" \n El Servidor ah Alcanzado el Maximo de productos a publicar\n");
                        }
                        else
                        {
                            mercan[auxDato].idUsu=users[resBusq].id;
                            mercan[auxDato].idProd=auxDato+1;
                            solCadena("\n Indique el Nombre del Producto: ",mercan[auxDato].nomProduc);
                            mercan[auxDato].precio=ingrInt("indique el Precio de Venta producto: ");
                            mercan[auxDato].stock=ingrInt("indique el Stock del Producto: ");
                        }

                    }
                    else
                    {
                        printf("\n ERROR La Contrasena es incorecta \n ");
                    }
                }
                break;
            case 5:
                datoABuscar=ingrInt("Indique Su ID: ");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                     printf("el ID indicado no Existe!!!!! \n");
                }
                else
                {
                    solCadena("Indique su Contrasena: ",x);

                    if(stricmp(x,users[resBusq].password)==0)
                    {

                            printf("USUARIO: %s         ID: %d \n",users[resBusq].nomUsuario,users[resBusq].id);
                            printf("ind   ID   N.Producto   Precio  Stock Ventas \n");
                            mostrarDatosEspcf(mercan,PROD,datoABuscar);
                            subOp=ingrInt("\n-indicar el ID del Producto a Modificar\n");
                            auxDato=busPrimeraOcurrencia2(mercan,PROD,subOp);
                            if(auxDato==-1)
                            {
                                printf("\n no existe el ID del Producto ingresado \n");
                            }
                            else
                            {
                                mercan[auxDato].precio=ingrInt("indique el Nuevo Precio del Producto: \n");
                                mercan[auxDato].stock=ingrInt("indique el Nuevo Stock de Producto \n");
                            }
                    }
                    else
                    {
                        printf("ERROR La Contrasena es incorecta \n");
                    }
                }
                break;
            case 6:
                datoABuscar=ingrInt("Indique Su ID: ");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                     printf("el ID indicado no Existe!!!!! \n");
                }
                else
                {
                    solCadena(" \n Indique su Contrasena: ",x);

                    if(stricmp(x,users[resBusq].password)==0)
                    {

                            printf("USUARIO: %s         ID: %d \n",users[resBusq].nomUsuario,users[resBusq].id);
                            mostrarDatosEspcf(mercan,PROD,datoABuscar);
                            subOp=ingrInt("\n-indicar el ID del Producto a Dar de Baja\n");
                            auxDato=busPrimeraOcurrencia2(mercan,PROD,subOp);
                            if(auxDato==-1)
                            {
                                printf("\n no existe el ID del Producto ingresado \n");
                            }
                            else
                            {
                                mercan[auxDato].idUsu=0;
                                mercan[auxDato].idProd=-1;
                                strcpy(mercan[auxDato].nomProduc," ");
                                mercan[auxDato].precio=0;
                                mercan[auxDato].stock=0;

                            }
                    }
                    else
                    {
                        printf("ERROR La Contrasena es incorecta \n");
                    }
                }

                break;
            case 7:
                break;
            case 8:
                datoABuscar=ingrInt("Indique Su ID: ");
                resBusq=busPrimeraOcurrencia(users,TAM,datoABuscar);
                if(resBusq==-1)
                {
                     printf("el ID indicado no Existe!!!!! \n");
                }
                else
                {
                    solCadena(" \n Indique su Contrasena: ",x);

                    if(stricmp(x,users[resBusq].password)==0)
                    {

                            printf("USUARIO: %s         ID: %d \n",users[resBusq].nomUsuario,users[resBusq].id);
                            printf("ind   ID   N.Producto   Precio  Ventas  Stock \n");
                            for(i=0;i<PROD;i++)
                            {
                                if(mercan[i].idUsu==users[resBusq].id)
                                {
                                    printf("%d   %d      %s       %d     %d    %d    \n",i,mercan[i].idProd,mercan[i].nomProduc,mercan[i].precio,mercan[i].ventas,mercan[i].stock);
                                }
                            }
                    }
                    else
                    {
                        printf("ERROR La Contrasena es incorecta \n");
                    }
                }
                break;
            case 9:
                    printf(" \n ind   ID   N.Producto   Precio  Ventas  Stock Nom. d Usuario \n");
                    for(i=0;i<PROD;i++)
                    {
                        if(mercan[i].idProd!=-1)
                        {
                            auxDato=busPrimeraOcurrencia(users,TAM,mercan[i].idUsu);
                            printf("%d   %d      %s       %d     %d    %d    %s \n",i,mercan[i].idProd,mercan[i].nomProduc,mercan[i].precio,mercan[i].ventas,mercan[i].stock,users[auxDato].nomUsuario);
                        }
                    }
                break;
            case 10:
                mostrarDatosCarg(users,TAM);
                break;
            }
    }while(opcion!=11);
    return 0;
}
