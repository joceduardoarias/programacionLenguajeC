#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "productos.h"
#define TAM 200


int main()
{
    // arrays de productos
    eProduct productArray[TAM];
    //_________________________________________________
//    eProduct productAux;

    /*char descriptionAux[51];
    int codeAux;
    int qtyAux;
    float priceAux;

    char codeAuxStr[50];
    char qtyAuxStr[50];
    char priceAuxStr[50];

    int freePlaceIndex;
    int foundIndex;
     int i,j;
    */
    int option = 0;



    setStatus(productArray,TAM,0);

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


    return 0;
}



