typedef struct
{
    char description[51];
    int code;
    int qty;
    float price;
    int idProveedor;
    int status; /**< Active (1) or Inactive (0)  */
} eProduct;

void setStatus(eProduct productArray[],int arrayLenght,int value);
int findEmptyPlace(eProduct productArray[],int arrayLenght);
int findProductByCode(eProduct productArray[],int arrayLenght,int code);
/** \brief
 *  carga los datos ingresados por el usuario en cada uno de los ficheros.
 * \param  productArray el array se pasa como parametro.
 * \param  tam se pasa el tamaño del array.
 */
void altaDeProductos(eProduct productArray[],int tam);
void bajaDeProductos(eProduct productArray[],int tam);
void modificacionDeProductos(eProduct productArray[],int tam);
void mostrarProducto(eProduct productArray);
void listarProductos(eProduct productArray[], int tam);
void setPorductos(eProduct productArray[],int freePlaceIndex, char description[],int code,float price,int stock);
/** \brief total, promedio de importes, cuantos productos superan ese promedio de importes
 *
 * \param
 * \param
 * \return
 *
 */
void totalImportes(eProduct productArray[],int tam);
void promedioImportes(eProduct productArray[],int tam);
void productosPromedioSuperior(eProduct productArray[],int tam);
void productosPromedioInferior(eProduct productArray[],int tam);
void productosStockMenorIgualDiez(eProduct productArray[],int tam);
void productosStockMayorDiez(eProduct productArray[],int tam);
