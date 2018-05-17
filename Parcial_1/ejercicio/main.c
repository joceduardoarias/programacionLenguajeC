#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "productos.h"
#include "proveedores.h"
#include "listados.h"
#define TAM 200

void adminProductos(eProduct productArray[]);
void adminProveedores(eProveedor proveedorArray[]);

int main()
{
    // arrays de productos
    eProduct productArray[TAM];
    setStatus(productArray,TAM,0);
    //_________________________________________________

    eProveedor proveedorArray[TAM];
    setStatusProveedor(proveedorArray,TAM,0);

    setPorductos(productArray,0,"COCA",1,35,50,1);
    setPorductos(productArray,1,"ZERO",2,30,40,1);
    setPorductos(productArray,2,"MIRINGA",3,30,30,2);
    setPorductos(productArray,3,"PEPSI",4,33,50,2);
    setPorductos(productArray,4,"FANTA",5,33,9,3);

    setProveedores(proveedorArray,0,1,"Potigian");
    setProveedores(proveedorArray,1,2,"Supply");
    setProveedores(proveedorArray,2,3,"Bajostock");


    int option = 0;

    while(option != 15)
    {
        system("cls");
        printf("\n------------  MENU PRINCIPAL ------------");
        option = getInt("\n1 - ABM PRODUCTOS \n2 - ABM PROVEDORES \n3 - INFORMES\n4 -  Productos stock menor o igual 10 \n5 - Productos stock igual 10 \n6 - Productos por encima del promedio de importes\n7 - Productos que no superan el promedio de importes\n8 - Proveedores cuya cantidad de producto es menor a 10\n9 -  \n15 - SALIR  \n\n");
        switch(option)
        {
        case 1: // ABM PRODUCTOS
            adminProductos(productArray);
            break;
        case 2: // ABM PROVEEDORES
            adminProveedores(proveedorArray);
            break;
        case 3: // LISTAR
            system("cls");
            totalImportes(productArray,TAM);
            promedioImportes(productArray,TAM);
            productosPromedioSuperior(productArray,TAM);
            productosStockMenorIgualDiez(productArray,TAM);
            productosStockMayorDiez(productArray,TAM);
            system("pause");
            break;
        case 4:
            system("cls");
            //B
            listaProductosMenorIgualDiez(productArray,TAM);
            system("pause");
            break;
        case 5: // LISTAR
            system("cls");
            //C
            listaProductosQtyIgualDiez(productArray,TAM);
            system("pause");
            break;
        case 6: // LISTAR
            system("cls");
            //D
            listaProductosPromedioSuperior(productArray,TAM);
            system("pause");
            break;
        case 7: // LISTAR
            system("cls");
            //E
            listarproductosPromediosInferior(productArray,TAM);
            system("pause");
            break;
        case 8: // LISTAR
            system("cls");
            //F
            listarProveedorProductoCantidadMenor(productArray,TAM,proveedorArray,TAM);
            system("pause");
            break;
        case 9:
             system("cls");
            listarPorductosPorProveedor(productArray,TAM,proveedorArray,TAM);
            system("pause");
            break;
        case 15:
            option = 15;
            break;
        }
    }

    return 0;
}

void adminProductos(eProduct productArray[])
{
    int option = 0;
    while(option != 9)
    {
        system("cls");
        option = getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n6 - INFORMES\n9 - SALIR\n\n\n");
        switch(option)
        {
        case 1:
            system("cls");
            altaDeProductos(productArray,TAM);

            system("pause");
            break;

        case 2:
            system("cls");
            bajaDeProductos(productArray,TAM);

            system("pause");
            break;

        case 3:
            system("cls");
            modificacionDeProductos(productArray,TAM);
            system("pause");
            break;

        case 4:
            system("cls");
            listarProductos(productArray,TAM);
            system("pause");
            break;
        case 6:
            system("cls");
            totalImportes(productArray,TAM);
            promedioImportes(productArray,TAM);
            productosPromedioSuperior(productArray,TAM);
            productosStockMenorIgualDiez(productArray,TAM);
            productosStockMayorDiez(productArray,TAM);
            system("pause");
            break;
        case 9:
            option=9;
            break;
        }
    }
}
void adminProveedores(eProveedor proveedorArray[])
{
    int option = 0;

    while(option!=5)
    {
        system("cls");
        option = getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - SALIR\n\n\n");
        switch(option)
        {
        case 1:
            system("cls");
            altaDeProveedores(proveedorArray,TAM);
            system("pause");
            break;
        case 2:
            system("cls");
            bajaDeProveedores(proveedorArray,TAM);
            system("pause");
            break;
        case 3:
            system("cls");
            modificacionDeProveedores(proveedorArray,TAM);
            system("pause");
            break;
        case 4:
            system("cls");
            listarProveedores(proveedorArray,TAM);
            system("pause");
            break;
        case 5:
            option = 5;
            break;
        }
    }


}
