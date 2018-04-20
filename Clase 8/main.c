#include <stdio.h>
#include <stdlib.h>
//int ordenarNum[](int[],int);
int buscarInt(int[],int tam);
void mostrarDatos(char nombres[][30],int leg[],int not1[],int not2[],float prom[],int cantRep);
int main()
{
    int legajos[3]={1,2,3};
    char nombres[3][30]={"Katrian", "Jose", "Alice"};
    char auxString[3][30];
    int auxNum;
    int auxfloat;
    int nota1[3]={8,9,5};
    int nota2[3]={6,10,3};
    float promedio[3]={7,8.50,4};
    int i;
    int j;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(nombres[i],nombres[j])>0)
            {
                strcpy(auxString[i],nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxString[i]);
                auxNum=legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxNum;
                auxNum=nota1[i];
                nota1[i]=nota1[j];
                nota1[j]=auxNum;
                auxNum=nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=auxNum;
                auxfloat=promedio[i];
                promedio[i]=promedio[j];
                promedio[j]=auxfloat;


            }
        }
    }

   /* for(i=0;i<3;i++)
    {
        printf("Nombre : %s\n", nombres[i]);
    }*/
    mostrarDatos(nombres,legajos,nota1,nota2, promedio,3);
    return 0;
}
void mostrarDatos(char nombres[][30],int leg[],int not1[],int not2[],float prom[],int cantRep)
{
    int i;
    for(i=0;i<cantRep;i++)
    {
        printf("%s ------------- %d ---- %d ---- %d ---- %.2f\n",nombres[i],leg[i],not1[i],not2[i],prom[i]);
    }
}
int buscarInt(int vector[],int tam)
{
    int index;
    int i;
    for(i=0;i<tam;i++)
    {
        if (strcmp(vector[i],2)!= -1)
        {

        }
    }
}

