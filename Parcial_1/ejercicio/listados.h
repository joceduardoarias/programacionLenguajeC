//_________________________________________________
//                                                 |
//                   LISTADOS
//_________________________________________________|
/** \brief muestra los productos con stock menor o igual a 10
 *
 * \param productArray[] eProduct array a recorer
 * \param tam int tamaño del array
 * \return void
 *
 */
void listaProductosMenorIgualDiez(eProduct productArray[],int tam);
/** \brief muestra los productos con stock igual a 10
 * \param productArray[] eProduct array a recorer
 * \param tam int tamaño del array
 * \return void
 */
void listaProductosQtyIgualDiez(eProduct productArray[],int tam);
/** \brief muestra los productos cuyo importe esta por encima del promedio
 * \param productArray[] eProduct array a recorer
 * \param tam int tamaño del array
 * \return void
 */
void listaProductosPromedioSuperior(eProduct productArray[],int tam);
/** \brief muestra los productos cuyo importe esta por debajo del promedio
 * \param productArray[] eProduct array a recorer
 * \param tam int tamaño del array
 * \return void
 */
void listarproductosPromediosInferior(eProduct productArray[], int tam);

/** \brief muestra todo los proveedores cuya cantidad de productos es iugual o mayo a 10
 *
 * \param productArray[] eProduct array de productos a reecores
 * \param tam int tamaño del array a recorrer
 * \param proveedorArray[] eProveedor array de provedores a reecores
 * \param tamproveedor int tamaño del array a recorrer
 * \return void
 *
 */
void listarProveedorProductoCantidadMenor(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor);
/** \brief muestra todo los proveedores y los productos asignados a cada uno
 *
 * \param productArray[] eProduct array de productos a reecores
 * \param tam int tamaño del array a recorrer
 * \param proveedorArray[] eProveedor array de provedores a reecores
 * \param tamproveedor int tamaño del array a recorrer
 * \return void
 *
 */
void listarPorductosPorProveedor(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor);
/** \brief oredena los productos de forma alfabetica y con importes
 * \param productArray[] eProduct array recorrer
 * \param tam int tamaño del array
 * \return void
 */
void listaOrdenadaProductos(eProduct productArray[], int tam);
void listaProveedorConMasProductos(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor);
/** \brief busca el precio mas bajo en campo importe
 * \param productArray[] eProduct array a recorrer
 * \param tam int tamaño del array
 * \return float verifica c0n -1 si no encontro nada o devuelve el importe mas bajo
 */
float getCheaperPrice(eProduct productArray[],int tam);
/** \brief busca el precio mas alto en campo importe
 * \param productArray[] eProduct array a recorrer
 * \param tam int tamaño del array
 * \return float verifica c0n -1 si no encontro nada o devuelve el importe mas bajo
 */
float getExpensivePrice(eProduct productArray[],int tam);
/** \brief muestra el precio mas bajo en campo importe
 * \param productArray[] eProduct array a recorrer
 * \param productArray[] eProveedor array a recorrer
 * \param tam int tamaño del array
 * \return float verifica c0n -1 si no encontro nada o devuelve el importe mas bajo
 */
void listaProductomasBarato(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor);
/** \brief muestra el precio mas bajo en campo importe
 * \param productArray[] eProduct array a recorrer
 * \param productArray[] eProveedor array a recorrer
 * \param tam int tamaño del array
 * \return float verifica c0n -1 si no encontro nada o devuelve el importe mas bajo
 */
void listaProductomasCaro(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor);
