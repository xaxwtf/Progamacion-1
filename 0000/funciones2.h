typedef struct{
    int idUsu;
    int idProd;
    char nomProduc[50];
    int precio;
    int stock;
    int ventas;
}eproductos;

/** \brief inicializa un array en el valor que indique el programador
 *
 * \param vector: es el array al cual se le asiganara el dato
 * \param tam es el tamaño del array al cual se le asignara el dato
 * \param es el dato que se le asiganara a cada pocicion del array
 * \return
 *
 */

void inizArray2(eproductos vector[],int tam,int valor);
/** \brief busca el valor indicado dentro del array
 *
 * \param vector es el array en el cual se reliza la busqueda
 * \param tam es el tamaño del array
 * \param valor es el dato a ser buscando dentro del array
 * \return devuelve -1 si no se encuentra el dato o devuelve el indice en el cual se encontro el dato indicado
 *
 */
int busPrimeraOcurrencia2(eproductos vector[],int tam, int valor);

//int busTodasOcurrencias(eproductos vector[],int tam,int dep[], int valor);
