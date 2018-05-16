
typedef struct
{
    char nombre[51];
    int idProveedor;
    int status; /**< Active (1) or Inactive (0)  */
}eProveedor;

void setStatusProveedor(eProveedor proveedortArray[],int arrayLenght,int value);
int findProveedorEmptyPlace(eProveedor proveedortArray[],int arrayLenght);
int findProveedorByid(eProveedor proveedorArray[],int arrayLenght,int idproveedor);

//_________________________________________________
/*
            ALTAS-BAJAS-MODIFICACIOENS
*/
//_________________________________________________

void altaDeProveedores(eProveedor proveedorArray[],int tam);
void bajaDeProveedores(eProveedor proveedortArray[],int tam);
void modificacionDeProveedores(eProveedor proveedortArray[],int tam);
void mostrarProveedor(eProveedor proveedortArray);
void listarProveedores(eProveedor proveedorArray[], int tam);
void setProveedores(eProveedor proveedorArray[],int freePlaceIndex,int idProveedor, char description[]);
