#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *(SWITCH)pedir el ingreso de un día de la semana,
  *si es fin de semana mostrar " buen finde",
  *si es día hábil “ a trabajar”,
  *si no es un día valido, también informarlo,
*/
int main()
{
    // Declarar variables
    int dia;

    // Datos de entrada
    printf("\n Seleccione un dia de la semana \n");
    printf("\n\n 1. Lunes  ");
    printf("\n 2. Martes");
    printf("\n 3. Miercoles");
    printf("\n 4. Jueves");
    printf("\n 5. Viernes");
    printf("\n 6. Sabado");
    printf("\n 7. Domingo");
    printf("\n Seleccione un dia de la semana: ");
    scanf("%d", &dia);

    // Sentencia de salida de datos
    switch(dia)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:

            printf("\n A trabajar \n");

        break;

        case 6:
        case 7:

            printf("\n Buen finde\n");

        break;

        default:

            printf("\n Error!!! Ingrese un dia valido \n");

        break;


    }

    return 0;
}
