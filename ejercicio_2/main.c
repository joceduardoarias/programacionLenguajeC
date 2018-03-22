#include <stdio.h>
#include <stdlib.h>
/**
 *  Mostrar el mensaje "usted es xxxxx y
 *  vive en la localidad de xxxxxxxx".
 */
int main()
{
    // Declara variables de entrada y salida
    char nombre[20];
    char localidad[20];
    // Entrada de datos
    printf("Ingrese su nombre: ");
    scanf("%s",nombre);
    printf("Ingrese su localidad: ");
    fflush( stdin );
    scanf("%s",localidad);
    // Salidad de datos
    printf("\n Su nombre es %s y vive en la localidad de %s \n", nombre, localidad);
    return 0;
}
