#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "productos.h"
#include "proveedores.h"
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

    setPorductos(productArray,0,"COCA",1,35,50);
    setPorductos(productArray,1,"ZERO",2,30,40);
    setPorductos(productArray,2,"MIRINGA",3,30,30);
    setPorductos(productArray,3,"PEPSI",4,33,50);
    setPorductos(productArray,4,"FANTA",5,33,25);

    setProveedores(proveedorArray,0,1,"Potigian");
    setProveedores(proveedorArray,1,2,"Supply");
    setProveedores(proveedorArray,2,3,"Bajostock");


    int option = 0;

    while(option != 4)
    {
        system("cls");
        printf("\n------------  MENU PRINCIPAL ------------");
        option = getInt("\n1 - ABM PRODUCTOS \n2 - ABM PROVEDORES \n3 - INFORMES\n4 - SALIR\n\n\n");
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
            option = 4;
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
        option = getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n6 INFORMES\n9 - SALIR\n\n\n");
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
