typedef struct{
    int id;
    char nombre[50];
    char nomDUsuario[50];
    char contr[50];
    int edad;

}eUsuarios;
void iniciarArrayNum(eUsuarios[],int,int);
int solicitarInt(char []);
void pedirCadena(char [],char []);
int buscarLibre(eUsuarios[], int, int);
void mostrarDatos(eUsuarios[],int);
