#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "productos.h"
#include"proveedores.h"
#include "listados.h"
void listaProductosMenorIgualDiez(eProduct productArray[],int tam)
{
    int i;
    system("cls");
    printf("                         ---LISTA DE PRODUCTOS---\n\n");
    printf("           Codigo        Descriptcion        Stock        Precio \n\n");
    for(i=0; i<tam; i++)
    {
        if(productArray[i].status == 1 && productArray[i].qty <=10)
        {
            mostrarProducto(productArray[i]);
        }
    }
}
void listaProductosQtyIgualDiez(eProduct productArray[],int tam)
{
    int i;
    system("cls");
    printf("                         ---LISTA DE PRODUCTOS---\n\n");
    printf("           Codigo        Descriptcion        Stock        Precio \n\n");
    for(i=0; i<tam; i++)
    {
        if(productArray[i].status == 1 && productArray[i].qty ==10)
        {
            mostrarProducto(productArray[i]);
        }
    }
}
void listaProductosPromedioSuperior(eProduct productArray[],int tam)
{
    int i;
    int productActivo=0;
    float promedio;
    float totalPrecios=0;
    system("cls");
    printf("                         ---LISTA DE PRODUCTOS---\n\n");
    printf("           Codigo        Descriptcion        Stock        Precio \n\n");
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
                mostrarProducto(productArray[i]);
            }
        }

    }

}
void listarproductosPromediosInferior(eProduct productArray[], int tam)
{
    int i;
    int productActivo=0;
    float promedio;
    float totalPrecios=0;
    system("cls");
    printf("                         ---LISTA DE PRODUCTOS---\n\n");
    printf("           Codigo        Descriptcion        Stock        Precio \n\n");
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
                mostrarProducto(productArray[i]);
            }
        }

    }

}
void listarProveedorProductoCantidadMenor(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor)
{
    int i;
    char auxProveedor[51];
    int auxIdProveedor;
    printf("\n| CODIGO  |       PRODUCTO       |     PROVEEDOR       | STOCK |\n");
    printf("________________________________________________________________\n");
    for(i=0; i<tam; i++)
    {
        if(productArray[i].status != 0 && productArray[i].qty<10)
        {
            auxIdProveedor = findProveedorByid(proveedorArray,tamproveedor,productArray[i].idProveedor);
            if(  auxIdProveedor!= -1)
            {
                strcpy(auxProveedor,proveedorArray[auxIdProveedor].nombre);
            }
            printf("\n %6d   %17s \t %15s \t %5d \n",productArray[i].code,productArray[i].description,auxProveedor,productArray[i].qty);
        }
    }
}
void listarPorductosPorProveedor(eProduct productArray[], int tam, eProveedor proveedorArray[],int tamproveedor)
{
    int i,j;
    printf("\n       Listado de provedores con su oferta de productos\n");
    for(i=0; i<tamproveedor; i++)
    {
        if(proveedorArray[i].status==1)
        {
            mostrarProveedor(proveedorArray[i]);
        }

        for(j=0; j<tam; j++)
        {
            if(proveedorArray[i].idProveedor == productArray[j].idProveedor && (proveedorArray[i].status==1 && productArray[j].status==1 ))
            {
                mostrarProducto(productArray[j]);
            }
        }
    }
}
void listaOrdenadaProductos(eProduct productArray[], int tam)
{
    eProduct auxProduct;
    int i,j;

    for(i=0; i< tam-1; i++)
    {
        for(j=i +1; j< tam; j++)
        {
            if(productArray[i].price == productArray[j].price)
            {
                if(strcmp(productArray[i].description, productArray[j].description)>0)
                {
                    auxProduct = productArray[i];
                    productArray[i] = productArray[j];
                    productArray[j] = auxProduct;
                }

            }
            else
            {
                if(productArray[i].price > productArray[j].price)
                {
                    auxProduct = productArray[i];
                    productArray[i] = productArray[j];
                    productArray[j] = auxProduct;
                }

            }
        }
    }
}

