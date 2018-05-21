
typedef struct
{
    char nombre[51];
    int idProveedor;
    int status; /**< Active (1) or Inactive (0)  */
}eProveedor;
/**
 * \brief Inicializa el status en un array de productos
 * \param proveeedortArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void setStatusProveedor(eProveedor proveedortArray[],int arrayLenght,int value);
/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param provedortArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int findProveedorEmptyPlace(eProveedor proveedortArray[],int arrayLenght);
/**
 * \brief Busca la primer ocurrencia de un producto mediante su codigo
 * \param proveedortArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param code Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int findProveedorByid(eProveedor proveedorArray[],int arrayLenght,int idproveedor);

//_________________________________________________
/*
            ALTAS-BAJAS-MODIFICACIOENS
*/
//_________________________________________________
/** \brief
 *  layout de los datos ingresado por el usuario.
 * \param  el array se pasa como parametro.
 * \param tam se pasa el tamaño del array.
 */
void altaDeProveedores(eProveedor proveedorArray[],int tam);
/** \brief
 *  eliminar registros ingresado por el usuario.
 * \param  el array se pasa como parametro.
 * \param tam se pasa el tamaño del array.
 */
void bajaDeProveedores(eProveedor proveedortArray[],int tam);
/** \brief
 *  modificar registros ingresado por el usuario.
 * \param  el array se pasa como parametro.
 * \param tam se pasa el tamaño del array.
 */
void modificacionDeProveedores(eProveedor proveedortArray[],int tam);
/** \brief
 *  layout de los datos ingresado por el usuario.
 * \param el array se pasa como parametro.
 * \param tam se pasa el tamaño del array.
 */
void mostrarProveedor(eProveedor proveedortArray);
/** \brief
 *  layout de los datos ingresado por el usuario.
 * \param el array se pasa como parametro.
 * \param tam se pasa el tamaño del array.
 */
void listarProveedores(eProveedor proveedorArray[], int tam);
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
void setProveedores(eProveedor proveedorArray[],int freePlaceIndex,int idProveedor, char description[]);
