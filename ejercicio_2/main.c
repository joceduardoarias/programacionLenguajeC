#include <stdio.h>
#include <stdlib.h>
/**
 *  Mostrar el mensaje "usted es xxxxx y
 *  vive en la localidad de xxxxxxxx".
 */
int main()
{
    // Declara variables de entrada y salida
    char nombre[20]; // declarar variable tipo char
    char localidad[20];
    // Entrada de datos
    printf("Ingrese su nombre: ");
    gets(nombre);// con cadena de caracteres no va "&"
    printf("Ingrese su localidad: ");
    fflush( stdin );
    gets(localidad); // usamos gets esta funcion es especial para caracteres. es mas facil para entrada de caracteres.
    // Salidad de datos
    printf("\n Su nombre es %s y vive en la localidad de %s \n", nombre, localidad);
    return 0;
}
