#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[TAM];
    char sexo;
    float sueldo;
    int isEmpty;
    eFecha;
} eEmpleado;
//PROTOTIPOS
int menu(void); //prototipo de menu
void inicializarEmpleado(eEmpleado vec[],int tam);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[],int tam);
void mostrarEmpleados(eEmpleado vec[],int tam);



int main()
{
    int salir=0;
    eEmpleado vec[TAM];
    inicializarEmpleado(vec,TAM);

    do
    {
        switch(menu())
        {
        case 1:
            system("cls");
            printf("\nALTA\n\n");
            altaEmpleado(vec,TAM);

            system("pause");

            break;
        case 2:
            system("cls");
            printf("\nBAJAS\n\n");
            system("pause");
            break;
        case 3:
            system("cls");
            printf("\nMODIFICACION\n\n");
            system("pause");
            break;
        case 4:
            system("cls");
            printf("\nLISTAR\n\n");
            mostrarEmpleados(vec, TAM);

            system("pause");

            break;
        case 5:
            system("cls");
            printf("\nORDENAR\n\n");
            system("pause");

            break;
        case 6:
            system("cls");
            printf("\nFin del programa");
            salir = 1;
            system("pause");
            break;
        }

    }
    while(salir != 1);
    return 0;
}
int menu(void)
{
    int retorno;
    system("cls");

    printf("\n1- ALTAS ");
    printf("\n2- BAJAS");
    printf("\n3- MODIFICACION");
    printf("\n4- LISTAR ");
    printf("\n5- ORDENAR");
    printf("\n6- SALIR \n\n");
    printf("\nELIJA UNA OPCION ");
    //PIDO LA OPCION QUE SE VA EJECUTAR
    scanf("%d", &retorno);
    return retorno;
}
void inicializarEmpleado(eEmpleado vec[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vec[i].isEmpty = 1;
    }
}
int buscarLibre(eEmpleado vec[], int tam)
{
    int index = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty==1)
        {
            index = i;
            break;
        }
    }

    return index;
}
int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int i;
    int index = -1;
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo== legajo)
        {
            index = i;
            break;
        }
    }
    return index;
}
void altaEmpleado(eEmpleado vec[],int tam)
{
    eEmpleado nuevoEmpleado;
    int index;
    int esta;
    int legajo;

    system("cls");
    printf("\n ALTA EMPLEADO ");

    index = buscarLibre(vec,tam);
    if(index == -1)
    {
        printf("\n el sistema esta comleto");
    }
    else
    {
        printf("ingrese legajo");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec,tam,legajo);
        if(esta != -1)
        {
            printf("\n el legajo ya existe");

        }
        else
        {
            nuevoEmpleado.isEmpty = 0;
            nuevoEmpleado.legajo = legajo;

            printf("\n ingrese nombre");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);
            printf("\n ingrese sexo");
            fflush(stdin);
            scanf("%c", &nuevoEmpleado.sexo);
            printf("\n ingrese sueldo");
            fflush(stdin);
            scanf("%f", &nuevoEmpleado.sueldo);

        }

    }
}
void mostrarEmpleados(eEmpleado vec[],int tam)
{
    int i;

    printf("\nlegajo    nombre     sexo     sueldo");
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {

            printf("\n %d   %s    %c    %f",vec[i].legajo,vec[i].nombre,vec[i].sexo,vec[i].sueldo);
        }
    }
}

