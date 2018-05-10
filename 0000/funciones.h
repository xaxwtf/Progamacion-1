typedef struct{
    int id;
    char nomUsuario[50];
    char password[50];
    int calificacion;
}eUsuarios;

/** \brief pide un dato, da el mensaje y lo retorna
 *
 * \param mensaje es el mensaje a ser mostrado
 * \return el dato Ingresado por Teclado
 *
 */
int ingrInt(char mensaje[]);



/** \brief inicializa un array en el valor que indique el programador
 *
 * \param vector: es el array al cual se le asiganara el dato
 * \param tam es el tamaño del array al cual se le asignara el dato
 * \param es el dato que se le asiganara a cada pocicion del array
 * \return
 *
 */
void inizArray(eUsuarios vector[],int tam,int valor);




/** \brief busca el valor indicado dentro del array
 *
 * \param vector es el array en el cual se reliza la busqueda
 * \param tam es el tamaño del array
 * \param valor es el dato a ser buscando dentro del arrays
 * \return devuelve -1 si no se encuentra el dato o devuelve el indice en el cual se encontro el dato indicado
 *
 */
int busPrimeraOcurrencia(eUsuarios vector[],int tam, int valor);




/** \brief solicita una cadena de caracteres al usuario y la guarda en la variable indicada ademas muestra el mensaje indicado
 *
 * \param mensaje: es el mensaje a ser mostrado
 * \param  dato es donde se guardara el dato solicitado al usuario
 * \return
 *
 */
void solCadena(char mensaje[],char dato[]);


/** \brief Muestra todos los datos cargados por el Usuario
 *
 * \param estr es el array en la cual se encuantran los datos a ser mostrados
 * \param es el tamaño del array del cual se mostraran los datos
 * \return
 *
 */
void mostrarDatosCarg(eUsuarios estr[],int tam);

