#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "proveedores.h"
#include "productos.h"
#include "listados.h"
#include "menu.h"
#define TAM 200
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

