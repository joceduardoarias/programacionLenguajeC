#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "proveedores.h"


void setStatusProveedor(eProveedor proveedortArray[],int arrayLenght,int value)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        proveedortArray[i].status = value;
    }
}
int findProveedorEmptyPlace(eProveedor proveedortArray[],int arrayLenght)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        if(proveedortArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}
int findProveedorByid(eProveedor proveedorArray[],int arrayLenght,int idproveedor)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
        if(proveedorArray[i].idProveedor == idproveedor && proveedorArray[i].status == 1)
        {
            return i;
        }
    }
    return -1;
}
void altaDeProveedores(eProveedor proveedorArray[],int tam)
{
    int freePlaceIndex;
    char codeAuxStr[50];
    int codeAux;
    char descriptionAux[51];


    system("cls");

    freePlaceIndex = findProveedorEmptyPlace(proveedorArray,tam);

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

    if( findProveedorByid(proveedorArray,tam,codeAux)!= -1)
    {
        printf("\n\nEL CODIGO YA EXISTE!!!\n");

    }
    else
    {

        while (!getStringLetras("Ingrese nombre proveedor: ",descriptionAux))
        {
            printf ("La nombre proveedor debe estar compuesta solo por letras\n");

        }

        proveedorArray[freePlaceIndex].idProveedor = codeAux;
        strcpy(proveedorArray[freePlaceIndex].nombre,descriptionAux);
        proveedorArray[freePlaceIndex].status = 1;
    }
}
void bajaDeProveedores(eProveedor proveedortArray[],int tam)
{
    char codeAuxStr[50];
    int foundIndex;
    int codeAux;
    char seguir;

    system("cls");

    printf("---Baja proveedor---\n\n");

    if (!getStringNumeros("Ingrese el id del proveedor a dar de baja: ",codeAuxStr))
    {
        printf ("El codigo de producto debe ser numerico\n");

    }

    codeAux = atoi(codeAuxStr);
    foundIndex = findProveedorByid(proveedortArray,tam,codeAux);

    if(foundIndex == -1)
    {
        printf("\n\nNO SE ENCUENTRA ESE CODIGO\n");

    }
    else
    {
        seguir = getChar("\n Confirmar baja S/N");

        if(seguir == 's')
        {
            proveedortArray[foundIndex].status = 0;
            printf("\nSe ha realizado la baja con EXITO!!!\n\n");
        }
        else
        {
            printf("\nSe ha cancelado la baja\n\n");
        }
    }
}
void modificacionDeProveedores(eProveedor proveedortArray[],int tam)
{
    int foundIndex;
    char codeAuxStr[50];
    int codeAux;
    char descriptionAux[51];
    int opcion;
    char seguir;
    char salir;

    if (!getStringNumeros("Ingrese el ID del proveedor a modificar: ",codeAuxStr))
    {
        printf ("El ID del proveedor debe ser numerico\n");

    }

    codeAux = atoi(codeAuxStr);
    foundIndex = findProveedorByid(proveedortArray,tam,codeAux);

    if(foundIndex == -1)
    {
        printf("\n\nNO SE ENCUENTRA ESE ID\n");

    }
    else
    {
        do
        {
            system("cls");
            opcion = getInt("\n Modificar: \n1. Desacription: \n2 Salir \n\n");
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
                    strcpy(proveedortArray[foundIndex].nombre,descriptionAux);
                }
                else
                {
                    printf("Modificacion cancelada");
                }
                system("pause");
                break;

            case 2:
                salir = 's';
                break;
            }
        }
        while(salir!= 's');

    }
}
void mostrarProveedor(eProveedor proveedortArray)
{
    printf("\n %15d | %10s ",proveedortArray.idProveedor,proveedortArray.nombre);
}
void listarProveedores(eProveedor proveedorArray[], int tam)
{
int i;
    system("cls");
    printf("           ---Lista de Proveedores---\n\n");
    printf("           ID    |    Descriptcion         \n\n");
    for(i=0; i< tam; i++)
    {
        if(proveedorArray[i].status == 1)
        {
            mostrarProveedor(proveedorArray[i]);
        }
    }
    system("pause");
}
void setProveedores(eProveedor proveedorArray[],int freePlaceIndex,int idProveedor, char description[])
{
    proveedorArray[freePlaceIndex].idProveedor = idProveedor;
    strcpy(proveedorArray[freePlaceIndex].nombre,description);
    proveedorArray[freePlaceIndex].status = 1;

}
