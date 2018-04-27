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
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;
    eFecha fechaIngreso;
} eEmpleado;
//PROTOTIPOS
int menu(void); //prototipo de menu
void inicializarEmpleado(eEmpleado vec[],int tam);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void mostrarEmpleados(eEmpleado vec[],int tam);
void mostrarEmpleado(eEmpleado vec);
void altaEmpleado(eEmpleado vec[],int tam);
void bajaEmpleado(eEmpleado vec[],int tam);
void modificarEmpleado(eEmpleado vec[], int tam);




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
            //printf("\nALTA\n\n");
            altaEmpleado(vec,TAM);

            system("pause");

            break;
        case 2:
            system("cls");
            // printf("\nBAJAS\n\n");
            bajaEmpleado(vec,TAM);
            system("pause");
            break;
        case 3:
            system("cls");
            modificarEmpleado(vec,TAM);
            system("pause");
            break;
        case 4:
            system("cls");
            // printf("\nLISTAR\n\n");
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
void mostrarEmpleados(eEmpleado vec[],int tam)
{
    int i;

    printf("\nLISTA\n\n");
    printf("\nlegajo    nombre     sexo     sueldo   fecha de ingreso");

    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {

            printf("\n %d   %s    %c    %f  %d %d %d",vec[i].legajo,vec[i].nombre,vec[i].sexo,vec[i].sueldo,vec[i].fechaIngreso.dia,vec[i].fechaIngreso.mes,vec[i].fechaIngreso.anio);
        }
    }
}
void mostrarEmpleado(eEmpleado vec)
{
    printf("\n %d   %s    %c    %f  %d %d %d",vec.legajo,vec.nombre,vec.sexo,vec.sueldo,vec.fechaIngreso.dia,vec.fechaIngreso.mes,vec.fechaIngreso.anio);
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

            printf("\n ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);
            printf("\n ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &nuevoEmpleado.sexo);
            printf("\n ingrese sueldo: ");
            fflush(stdin);
            scanf("%f", &nuevoEmpleado.sueldo);
            printf("\n ingrese fecha de ingreso: ");
            scanf("%d %d %d",&nuevoEmpleado.fechaIngreso.anio,&nuevoEmpleado.fechaIngreso.dia,&nuevoEmpleado.fechaIngreso.mes);

        }

    }
}
void bajaEmpleado(eEmpleado vec[],int tam)
{
    int legajo;
    int esta;
    char confirma = 's';

    printf("\n BAJA EMPLEADO");

    printf("\n ingrese legajo: ");
    scanf("%d",&legajo);

    esta = buscarEmpleado(vec,tam,legajo);

    if(esta == -1)
    {
        printf("\n legajo %d no se encuentra",legajo);
    }
    else
    {
        mostrarEmpleado(vec[esta]);

        printf("\n confirmar baja: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's')
        {
            vec[esta].isEmpty=1;
            printf("\n baja relizada");
        }
        else
        {
            printf("\n Ha cancelado la baja");
        }

    }

}
void modificarEmpleado(eEmpleado vec[], int tam)
{
    int legajo;
    float sueldo;
    int esta;
    char confirma = 's';

    printf("\n MODIFICAR EMPLEADO");

    printf("\n ingrese legajo: ");
    scanf("%d",&legajo);

    esta = buscarEmpleado(vec,tam,legajo);

    if(esta == -1)
    {
        printf("\n legajo %d no se encuentra",legajo);
    }
    else
    {
        mostrarEmpleado(vec[esta]);

        printf("\n ingrese nuevo sueldo: ");
        scanf("%f", &sueldo);

        printf("\n confirmar modificacion s/n: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's')
        {
            vec[esta].sueldo=sueldo;
            printf("\n modificacion relizada");
        }
        else
        {
            printf("\n Ha cancelar modificacion");
        }

    }
}
