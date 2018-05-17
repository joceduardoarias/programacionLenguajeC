#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "productos.h"

/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void setStatus(eProduct productArray[],int arrayLenght,int value)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        productArray[i].status = value;
    }
}

/**
 * \brief Busca la primer ocurrencia de un producto mediante su codigo
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param code Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int findProductByCode(eProduct productArray[],int arrayLenght,int code)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        if(productArray[i].code == code && productArray[i].status == 1)
        {
            return i;
        }
    }
    return -1;
}

/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int findEmptyPlace(eProduct productArray[],int arrayLenght)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        if(productArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}
void setPorductos(eProduct productArray[],int freePlaceIndex, char description[],int code,float price,int stock,int idProveedor)
{
    productArray[freePlaceIndex].code= code;
    strcpy(productArray[freePlaceIndex].description,description);
    productArray[freePlaceIndex].qty = stock;
    productArray[freePlaceIndex].price=price;
    productArray[freePlaceIndex].idProveedor=idProveedor;
    productArray[freePlaceIndex].status = 1;
}
void altaDeProductos(eProduct productArray[],int tam)
{

    int freePlaceIndex;
    char codeAuxStr[50];
    int codeAux;
    int qtyAux;
    char qtyAuxStr[50];
    char priceAuxStr[50];
    char descriptionAux[51];
    int priceAux;

    system("cls");

    freePlaceIndex = findEmptyPlace(productArray,tam);

    if(freePlaceIndex == -1)
    {
        printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");

    }

    printf("\nALTA\n");

    while (!getStringNumeros("Ingrese el codigo: ",codeAuxStr))
    {
        printf ("El codigo debe ser numerico\n");

    }
    codeAux = atoi(codeAuxStr);

    if( findProductByCode(productArray,tam,codeAux)!= -1)
    {
        printf("\n\nEL CODIGO YA EXISTE!!!\n");

    }
    else
    {

        while (!getStringLetras("Ingrese la descripcion: ",descriptionAux))
        {
            printf ("La descripcion debe estar compuesta solo por letras\n");

        }

        while (!getStringNumeros("Ingrese la cantidad: ",qtyAuxStr))
        {
            printf ("La cantidad debe ser numerica\n");

        }
        qtyAux = atoi(qtyAuxStr);

        while (!getStringNumerosFlotantes("Ingrese el valor: ",priceAuxStr))
        {
            printf ("La cantidad debe ser numerica\n");

        }
        priceAux = atof(priceAuxStr);

        productArray[freePlaceIndex].code = codeAux;
        strcpy(productArray[freePlaceIndex].description,descriptionAux);
        productArray[freePlaceIndex].price = priceAux;
        productArray[freePlaceIndex].qty = qtyAux;
        productArray[freePlaceIndex].status = 1;
    }
}
void bajaDeProductos(eProduct productArray[],int tam)
{
    char codeAuxStr[50];
    int foundIndex;
    int codeAux;
    char seguir;

    system("cls");

    printf("---Baja registro---\n\n");

    if (!getStringNumeros("Ingrese el codigo de producto a dar de baja: ",codeAuxStr))
    {
        printf ("El codigo de producto debe ser numerico\n");

    }

    codeAux = atoi(codeAuxStr);
    foundIndex = findProductByCode(productArray,tam,codeAux);

    if(foundIndex == -1)
    {
        printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");

    }
    else
    {
        seguir = getChar("\n Confirmar baja S/N");

        if(seguir == 's')
        {
            productArray[foundIndex].status = 0;
            printf("\nSe ha realizado la baja con EXITO!!!\n\n");
        }
        else
        {
            printf("\nSe ha cancelado la baja\n\n");
        }
    }
}
void modificacionDeProductos(eProduct productArray[],int tam)
{

    int foundIndex;
    char codeAuxStr[50];
    int codeAux;
    int qtyAux;
    char qtyAuxStr[50];
    char priceAuxStr[50];
    char descriptionAux[51];
    int priceAux;
    int opcion;
    char seguir;
    char salir;

    if (!getStringNumeros("Ingrese el codigo de producto a modificar: ",codeAuxStr))
    {
        printf ("El codigo de producto debe ser numerico\n");

    }

    codeAux = atoi(codeAuxStr);
    foundIndex = findProductByCode(productArray,tam,codeAux);

    if(foundIndex == -1)
    {
        printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");

    }
    else
    {
        do
        {
            system("cls");
            opcion = getInt("\n Modificar: \n1. Desacription:  \n2. Cantidad:  \n3. Valor:\n4 Salir \n\n");
            switch(opcion)
            {
            case 1:
                system("cls");
                while (!getStringLetras("Ingrese la descripcion: ",descriptionAux))
                {
                    printf ("La descripcion debe estar compuesta solo por letras\n");

                }
                seguir = getChar("Confirmar S/N");
                if(seguir == 's')
                {
                    strcpy(productArray[foundIndex].description,descriptionAux);
                }
                else
                {
                    printf("Modificacion cancelada");
                }
                system("pause");
                break;

            case 2:
                system("cls");
                while (!getStringNumeros("Ingrese la cantidad: ",qtyAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");

                }
                qtyAux = atoi(qtyAuxStr);
                seguir = getChar("Confirmar S/N");
                if(seguir == 's')
                {
                    productArray[foundIndex].qty = qtyAux;
                }
                else
                {
                    printf("Modificacion cancelada");
                }
                system("pause");
                break;

            case 3:
                system("cls");
                while (!getStringNumerosFlotantes("Ingrese el valor: ",priceAuxStr))
                {
                    printf ("La cantidad debe ser numerica\n");

                }
                priceAux = atof(priceAuxStr);
                seguir = getChar("Confirmar S/N");
                if(seguir == 's')
                {
                    productArray[foundIndex].price = priceAux;
                }
                else
                {
                    printf("Modificacion cancelada");
                }
                system("pause");
                break;

            case 4:
                salir = 's';
                break;


            }
        }
        while(salir!= 's');

    }
}
void mostrarProducto(eProduct productArray)
{
    printf("\n %15d   %12s  %15d   %15.2f\n",productArray.code, productArray.description,productArray.qty,productArray.price);
}
void listarProductos(eProduct productArray[], int tam)
{
    int i;
    system("cls");
    printf("           ---Lista de Productos---\n\n");
    printf("           Codigo        Descriptcion        Stock        Precio \n\n");
    for(i=0; i< tam; i++)
    {
        if(productArray[i].status == 1)
        {
            mostrarProducto(productArray[i]);
        }
    }
    system("pause");
}
void totalImportes(eProduct productArray[],int tam)
{
    float total = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status == 1)
        {
            total = total + productArray[i].price;
        }
    }
    printf("\nTotal de importes: %.2f\n", total);
}
void promedioImportes(eProduct productArray[],int tam)
{
    int i;
    int productActivo=0;
    float promedio;
    float totalPrecios=0;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            totalPrecios = totalPrecios + productArray[i].price;
            productActivo++;
        }
    }
    promedio = totalPrecios / (float)productActivo;
    printf("\nPromedio de precio: %.2f\n", promedio);
}
void productosPromedioSuperior(eProduct productArray[],int tam)
{
    int i;
    int productActivo=0;
    int productSuperior=0;
    float promedio;
    float totalPrecios=0;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            totalPrecios = totalPrecios + productArray[i].price;
            productActivo++;
        }
    }
    promedio = totalPrecios / (float)productActivo;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            if(productArray[i].price > promedio)
            {
                productSuperior++;
            }
        }

    }
    printf("\nCantidad de productos por arriba del promedio de precios: %d\n\n", productSuperior);
}
void productosPromedioInferior(eProduct productArray[],int tam)
{
    int i;
    int productActivo=0;
    int productInferior=0;
    float promedio;
    float totalPrecios=0;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            totalPrecios = totalPrecios + productArray[i].price;
            productActivo++;
        }
    }
    promedio = totalPrecios / (float)productActivo;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            if(productArray[i].price < promedio)
            {
                productInferior++;
            }
        }

    }
    printf("\nCantidad de productos por arriba del promedio de precios: %d\n\n", productInferior);
}
void productosStockMenorIgualDiez(eProduct productArray[],int tam)
{
    int i;
    int prodecMenor = 0;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status == 1)
        {
            if(productArray[i].qty <= 10)
            {
                prodecMenor++;
            }
        }
    }

    if(prodecMenor == 0)
    {
        printf("\nno hay productos cuyo stock sea menor o igual a diez\n");
    }
    else
    {
        printf("\n Cantidad de productos con stock menor o igual a diez: %d\n\n", prodecMenor);
    }

}
void productosStockMayorDiez(eProduct productArray[],int tam)
{
    int i;
    int prodecMayor = 0;

    for(i=0; i<tam; i++)
    {
        if(productArray[i].status==1)
        {
            if(productArray[i].qty > 10)
            {
                prodecMayor++;
            }
        }
    }

    if(prodecMayor == 0)
    {
        printf("\nNo hay productos cuyo stock sea mayor a diez\n\n");
    }
    else
    {
        printf("\n Cantidad de productos con stock mayor a diez: %d\n\n", prodecMayor);
    }

}


