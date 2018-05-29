#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldos;
    int status;
} eEmpleado;
eEmpleado* new_Empleado();
eEmpleado* new_EmpleadoParam(int,float,char*);
void mostrarEmpleados(eEmpleado* empleado, int);
void mostrarEmpleado(eEmpleado*);
eEmpleado* newArrayEmpleados(int);
void inicualizarEmpleados(eEmpleado* empleados,int tam);
int main()
{
    eEmpleado* personal;
    eEmpleado* empleado1;
    int cantidad;

    personal= newArrayEmpleados(TAM);

    if(personal == NULL)
    {
        printf("no hay memoria");
        exit(1);
    }
    empleado1 = new_EmpleadoParam(111,20000,"Ana");
    if(empleado1 == NULL)
    {
        printf("no se puede guardar empleado");
    }
    else
    {
        *(personal)= *empleado1;
    }
    mostrarEmpleados(personal,TAM);
    return 0;
}
eEmpleado* new_Empleado()
{
    eEmpleado* nuevoEmpleado;

    nuevoEmpleado = (eEmpleado*)malloc(sizeof(eEmpleado));
    if(nuevoEmpleado!=NULL)
    {
        nuevoEmpleado->legajo =0;
        strcpy(nuevoEmpleado->nombre,"");
        nuevoEmpleado->sueldos=0;
        nuevoEmpleado->status=0;
    }
    return nuevoEmpleado;
}
eEmpleado* new_EmpleadoParam(int legajo,float sueldo,char* nombre)
{
    eEmpleado* nuevoEmpleado;

     nuevoEmpleado = new_Empleado();
    if(nuevoEmpleado!=NULL)
    {
        nuevoEmpleado->legajo =legajo;
        strcpy(nuevoEmpleado->nombre,nombre);
        nuevoEmpleado->sueldos=sueldo;
        nuevoEmpleado->status=1;
    }
    return nuevoEmpleado;
}
void mostrarEmpleado(eEmpleado* nuevoEmpleado)
{
    printf("%d  %s  %.2f\n",nuevoEmpleado->legajo,nuevoEmpleado->nombre,nuevoEmpleado->sueldos);
}
void mostrarEmpleados(eEmpleado* empleado, int tam)
{
    int i;
    if(empleado != NULL && tam >0 )
    {
        for(i=0;i<tam;i++)
        {
            if(empleado->status==1)
            {
                mostrarEmpleado(empleado+i);
            }
        }
    }
}
eEmpleado* newArrayEmpleados(int tam)
{
    eEmpleado* array;
    if(tam>0)
    {
        array =(eEmpleado*)malloc(tam * sizeof(eEmpleado));
        if(array != NULL)
        {
            inicualizarEmpleados(array,tam);
        }
    }
    return array;
}
void inicualizarEmpleados(eEmpleado* empleados,int tam)
{
    int i;
    if(empleados != NULL && tam > 0)
    {
        for(i=0;i<tam;i++)
        {
            (empleados+i)->status=0;
        }
    }
}
