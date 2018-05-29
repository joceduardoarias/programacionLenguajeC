#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldos;
    int status;
} eEmpleado;
void empleadoSetLegajo(eEmpleado* empleado, int legajo);
int empleadogGetLegajo(eEmpleado* empleado);
int main()
{
    eEmpleado* unEmpleado;
    // buscar espacio para unEmpleado
    unEmpleado = (eEmpleado*)malloc(sizeof(eEmpleado));
    //VALIDACION
    if(unEmpleado==NULL)
    {
        printf("No se encontro espacio en memoria.\n\n");
        exit(1);
    }
    // CARGAR DATOS EN UN ESTRUCTURA
    unEmpleado->legajo= 1234;
    strcpy(unEmpleado->nombre,"juan");
    unEmpleado->sueldos = 20000;
    unEmpleado->status = 1;
    printf("%d  %s %.2f ", unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldos);
    free(unEmpleado);
    return 0;
}
void empleadoSetLegajo(eEmpleado* empleado, int legajo)// todas las funciones que reciben un puntero deben ser validadas
{
    if(empleado != NULL && empleado>0)
    {
        empleado->legajo=legajo;
    }
}
int empleadogGetLegajo(eEmpleado* empleado)
{
    int retorno = -1;
    if(empleado != NULL)
    {
        retorno = empleado->legajo;
    }
    return retorno;
}
