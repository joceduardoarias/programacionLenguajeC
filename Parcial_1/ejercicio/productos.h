typedef struct
{
    char description[51];
    int code;
    int qty;
    float price;
    int idProveedor;
    int status; /**< Active (1) or Inactive (0)  */
} eProduct;
/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void setStatus(eProduct productArray[],int arrayLenght,int value);
/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int findEmptyPlace(eProduct productArray[],int arrayLenght);
/**
 * \brief Busca la primer ocurrencia de un producto mediante su codigo
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param code Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int findProductByCode(eProduct productArray[],int arrayLenght,int code);

/** \brief carga datos en la estrcutura productos
 * \param productArray[] eProduct es el array a cargar
 * \param tam int tamaño de el array
 */
void altaDeProductos(eProduct productArray[],int tam);
/** \brief baja logica datos en la estrcutura productos
 * \param productArray[] eProduct es el array a cargar
 * \param tam int tamaño de el array
 */
void bajaDeProductos(eProduct productArray[],int tam);
/** \brief Modifica datos en la estrcutura productos
 * \param productArray[] eProduct es el array a modificar
 * \param tam int tamaño de el array
 */
void modificacionDeProductos(eProduct productArray[],int tam);
/** \brief Muestra los valores cargados en la estructura porductArray
 * \param productArray eProduct
 * \return void
 */
void mostrarProducto(eProduct productArray);
/** \brief Lista todos los valores cargados en la estructura porductArray
 * \param productArray eProduct estructura de la cual se muestran sus campos
 * \return void
 */
void listarProductos(eProduct productArray[], int tam);
/** \brief Inicializa cada campo de la estructura
 *
 * \param productArray[] eProduct estructura a cargar sus campos
 * \param freePlaceIndex int auxiliar de espacio libre en el campo
 * \param description[] char nombre del producto
 * \param code int codigo identificador del producto
 * \param price float precio del producto
 * \param stock int candidad
 * \param idProveedor int identificador del producto con su proveedor
 * \return void
 *
 */
void setPorductos(eProduct productArray[],int freePlaceIndex, char description[],int code,float price,int stock,int idProveedor);

/** \brief Calcula el promedio total del campo importes importes
 *
 * \param productArray[] eProduct estructura a rrecorres
 * \param tam int tamaño del array
 * \return void
 *
 */
void totalImportes(eProduct productArray[],int tam);

/** \brief calcula el promedio de del total de importes
 *
 * \param productArray[] eProduct estructura a recorres
 * \param tam int tamaño de la estructura
 * \return void
 *
 */
void promedioImportes(eProduct productArray[],int tam);
/** \brief calcula los producto cuyo importe esta por encima del promedio
 * \param productArray[] eProduct array a recorres
 * \param tam int tamaño del array
 * \return void
 */
void productosPromedioSuperior(eProduct productArray[],int tam);
/** \brief calcula los producto cuyo importe esta por debajo del promedio
 * \param productArray[] eProduct array a recorres
 * \param tam int tamaño del array
 * \return void
 */
void productosPromedioInferior(eProduct productArray[],int tam);

/** \brief calcula la cantidad de productos con stock menor o igual 10
 * \param productArray[] eProduct array a recorrer
 * \param tam int tamaño del array
 * \return void
 */
void productosStockMenorIgualDiez(eProduct productArray[],int tam);
/** \brief calcula la cantidad de productos con stock mayot a 10
 * \param productArray[] eProduct array a recorrer
 * \param tam int tamaño del array
 * \return void
 */
void productosStockMayorDiez(eProduct productArray[],int tam);
